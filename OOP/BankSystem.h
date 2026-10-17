// BankSystem.h
#ifndef BANKSYSTEM_H
#define BANKSYSTEM_H

#include "Account.h"
#include "Employee.h"
#include "Criminal.h"
#include "Transaction.h"
#include <vector>
#include <string>
using namespace std;

class BankSystem {
public:
    BankSystem();

    // Main menu
    void run();

private:
    // Data storage
    vector<Account> accounts;
    vector<Employee> employees;
    vector<Criminal> criminals;
    vector<Transaction> transactions;

    // File operations
    void loadAccounts();
    void saveAccounts();
    void loadEmployees();
    void saveEmployees();
    void loadCriminals();
    void saveCriminals();
    void loadTransactions();
    void saveTransactions();

    // Menu operations
    void mainMenu();
    void createAccount();
    void atmMenu();
    void deposit();
    void withdraw();
    void showAccount();
    void addEmployee();
    void showEmployees();
    void addCriminal();
    void showCriminals();
    void processSalary();
    void showTransactions();

    // Helpers
    Account* findAccountByCNIC(const string& cnic);
    Employee* findEmployeeByCNIC(const string& cnic);
    Criminal* findCriminalByCNIC(const string& cnic);
};

#endif // BANKSYSTEM_H