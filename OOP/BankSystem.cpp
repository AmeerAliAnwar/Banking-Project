// BankSystem.cpp
#include "BankSystem.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <limits>

using namespace std;

BankSystem::BankSystem() {
    loadAccounts();
    loadEmployees();
    loadCriminals();
    loadTransactions();
}

void BankSystem::run() {
    mainMenu();
    saveAccounts();
    saveEmployees();
    saveCriminals();
    saveTransactions();
}

void BankSystem::mainMenu() {
    int choice;
    do {
        cout << "\n=== BANKING SYSTEM MAIN MENU ===\n";
        cout << "1. Create Account\n";
        cout << "2. ATM Menu\n";
        cout << "3. Show Account\n";
        cout << "4. Add Employee\n";
        cout << "5. Show Employees\n";
        cout << "6. Add Criminal\n";
        cout << "7. Show Criminals\n";
        cout << "8. Process Salary\n";
        cout << "9. Show Transactions\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        switch (choice) {
            case 1: createAccount(); break;
            case 2: atmMenu(); break;
            case 3: showAccount(); break;
            case 4: addEmployee(); break;
            case 5: showEmployees(); break;
            case 6: addCriminal(); break;
            case 7: showCriminals(); break;
            case 8: processSalary(); break;
            case 9: showTransactions(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 0);
}

// --- File Operations ---

void BankSystem::loadAccounts() {
    accounts.clear();
    ifstream fin("accounts.txt");
    if (!fin) return;
    string section, line;
    while (getline(fin, line)) {
        if (line == "---ACCOUNT---") {
            section = line + "\n";
            while (getline(fin, line) && line != "--------------------") {
                section += line + "\n";
            }
            section += "--------------------\n";
            accounts.push_back(Account::fromTextSection(section));
        }
    }
}

void BankSystem::saveAccounts() {
    ofstream fout("accounts.txt",ios::app);
    for (const auto& acc : accounts) {
        fout << acc.toTextSection();
    }
}

void BankSystem::loadEmployees() {
    employees.clear();
    ifstream fin("employees.txt");
    if (!fin) return;
    string section, line;
    while (getline(fin, line)) {
        if (line == "---EMPLOYEE---") {
            section = line + "\n";
            while (getline(fin, line) && line != "--------------------") {
                section += line + "\n";
            }
            section += "--------------------\n";
            employees.push_back(Employee::fromTextSection(section));
        }
    }
}

void BankSystem::saveEmployees() {
    ofstream fout("employees.txt",ios::app);
    for (const auto& emp : employees) {
        fout << emp.toTextSection();
    }
}

void BankSystem::loadCriminals() {
    criminals.clear();
    ifstream fin("criminals.txt");
    if (!fin) return;
    string section, line;
    while (getline(fin, line)) {
        if (line == "---CRIMINAL---") {
            section = line + "\n";
            while (getline(fin, line) && line != "--------------------") {
                section += line + "\n";
            }
            section += "--------------------\n";
            criminals.push_back(Criminal::fromTextSection(section));
        }
    }
}

void BankSystem::saveCriminals() {
    ofstream fout("criminals.txt",ios::app);
    for (const auto& crim : criminals) {
        fout << crim.toTextSection();
    }
}

void BankSystem::loadTransactions() {
    transactions.clear();
    ifstream fin("transactions.txt");
    if (!fin) return;
    string section, line;
    while (getline(fin, line)) {
        if (line == "---TRANSACTION---") {
            section = line + "\n";
            while (getline(fin, line) && line != "--------------------") {
                section += line + "\n";
            }
            section += "--------------------\n";
            transactions.push_back(Transaction::fromTextSection(section));
        }
    }
}

void BankSystem::saveTransactions() {
    ofstream fout("transactions.txt",ios::app);
    for (const auto& t : transactions) {
        fout << t.toTextSection();
    }
}

// --- Menu Operations ---

void BankSystem::createAccount() {
    string cnic, name, pin;
    double balance;
    cout << "Enter CNIC: "; getline(cin, cnic);
    if (findAccountByCNIC(cnic)) {
        cout << "Account already exists!\n";
        return;
    }
    cout << "Enter Name: "; getline(cin, name);
    cout << "Set PIN: "; getline(cin, pin);
    cout << "Initial Balance: "; cin >> balance; cin.ignore();
    accounts.push_back(Account(cnic, name, pin, balance));
    cout << "Account created successfully!\n";
}

void BankSystem::atmMenu() {
    string cnic, pin;
    cout << "Enter CNIC: "; getline(cin, cnic);
    Account* acc = findAccountByCNIC(cnic);
    if (!acc) {
        cout << "Account not found!\n";
        return;
    }
    cout << "Enter PIN: "; getline(cin, pin);
    if (acc->pin != pin) {
        cout << "Incorrect PIN!\n";
        return;
    }
    int choice;
    do {
        cout << "\nATM Menu:\n1. Deposit\n2. Withdraw\n0. Back\nChoice: ";
        cin >> choice; cin.ignore();
        if (choice == 1) deposit();
        else if (choice == 2) withdraw();
    } while (choice != 0);
}

void BankSystem::deposit() {
    string cnic;
    double amount;
    cout << "Enter CNIC: "; getline(cin, cnic);
    Account* acc = findAccountByCNIC(cnic);
    if (!acc) { cout << "Account not found!\n"; return; }
    cout << "Enter amount to deposit: "; cin >> amount; cin.ignore();
    double before = acc->balance;
    acc->balance += amount;
    transactions.push_back(Transaction(cnic, "Deposit", amount, before, acc->balance));
    cout << "Deposit successful!\n";
}

void BankSystem::withdraw() {
    string cnic;
    double amount;
    cout << "Enter CNIC: "; getline(cin, cnic);
    Account* acc = findAccountByCNIC(cnic);
    if (!acc) { cout << "Account not found!\n"; return; }
    cout << "Enter amount to withdraw: "; cin >> amount; cin.ignore();
    if (amount > acc->balance) { cout << "Insufficient balance!\n"; return; }
    double before = acc->balance;
    acc->balance -= amount;
    transactions.push_back(Transaction(cnic, "Withdraw", amount, before, acc->balance));
    cout << "Withdrawal successful!\n";
}

void BankSystem::showAccount() {
    string cnic;
    cout << "Enter CNIC: "; getline(cin, cnic);
    Account* acc = findAccountByCNIC(cnic);
    if (acc) acc->display();
    else cout << "Account not found!\n";
}

void BankSystem::addEmployee() {
    string cnic, name, qualification, institute, speciality;
    int grade;
    cout << "Enter CNIC: "; getline(cin, cnic);
    if (findEmployeeByCNIC(cnic)) {
        cout << "Employee already exists!\n";
        return;
    }
    cout << "Enter Name: "; getline(cin, name);
    cout << "Enter Qualification: "; getline(cin, qualification);
    cout << "Enter Institute: "; getline(cin, institute);
    cout << "Enter Speciality: "; getline(cin, speciality);
    cout << "Enter Grade: "; cin >> grade; cin.ignore();
    employees.push_back(Employee(cnic, name, qualification, institute, speciality, grade));
    cout << "Employee added successfully!\n";
}

void BankSystem::showEmployees() {
    for (const auto& emp : employees) emp.display();
}

void BankSystem::addCriminal() {
    string cnic, name, crime, status;
    cout << "Enter CNIC: "; getline(cin, cnic);
    if (findCriminalByCNIC(cnic)) {
        cout << "Criminal already exists!\n";
        return;
    }
    cout << "Enter Name: "; getline(cin, name);
    cout << "Enter Crime: "; getline(cin, crime);
    cout << "Enter Status: "; getline(cin, status);
    criminals.push_back(Criminal(cnic, name, crime, status));
    cout << "Criminal added successfully!\n";
}

void BankSystem::showCriminals() {
    for (const auto& crim : criminals) crim.display();
}

void BankSystem::processSalary() {
    string cnic;
    cout << "Enter Employee CNIC: "; getline(cin, cnic);
    Employee* emp = findEmployeeByCNIC(cnic);
    if (!emp) { cout << "Employee not found!\n"; return; }
    double salary = (emp->grade <= 17) ? 5000.0 : 7000.0;
    Account* acc = findAccountByCNIC(cnic);
    if (!acc) { cout << "No account for this employee!\n"; return; }
    double before = acc->balance;
    acc->balance += salary;
    transactions.push_back(Transaction(cnic, "Salary", salary, before, acc->balance));
    cout << "Salary processed! New balance: " << acc->balance << endl;
}

void BankSystem::showTransactions() {
    for (const auto& t : transactions) t.display();
}

// --- Helpers ---

Account* BankSystem::findAccountByCNIC(const string& cnic) {
    for (auto& acc : accounts) if (acc.cnic == cnic) return &acc;
    return nullptr;
}

Employee* BankSystem::findEmployeeByCNIC(const string& cnic) {
    for (auto& emp : employees) if (emp.cnic == cnic) return &emp;
    return nullptr;
}

Criminal* BankSystem::findCriminalByCNIC(const string& cnic) {
    for (auto& crim : criminals) if (crim.cnic == cnic) return &crim;
    return nullptr;
}