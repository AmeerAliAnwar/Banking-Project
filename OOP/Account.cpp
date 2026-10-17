// Account.cpp
#include "Account.h"
#include <iostream>
#include <sstream>

Account::Account() : cnic(""), name(""), pin(""), balance(0.0) {}

Account::Account(string cnic, string name, string pin, double balance)
    : cnic(cnic), name(name), pin(pin), balance(balance) {}

void Account::display() const {
    cout << "CNIC: " << cnic << endl;
    cout << "Name: " << name << endl;
    cout << "PIN: " << pin << endl;
    cout << "Balance: " << balance << endl;
}

string Account::toTextSection() const {
    ostringstream oss;
    oss << "---ACCOUNT---\n";
    oss << "CNIC: " << cnic << "\n";
    oss << "Name: " << name << "\n";
    oss << "PIN: " << pin << "\n";
    oss << "Balance: " << balance << "\n";
    oss << "--------------------\n";
    return oss.str();
}

Account Account::fromTextSection(const string& section) {
    istringstream iss(section);
    string line, cnic, name, pin;
    double balance = 0.0;
    while (getline(iss, line)) {
        if (line.find("CNIC:") == 0) cnic = line.substr(6);
        else if (line.find("Name:") == 0) name = line.substr(6);
        else if (line.find("PIN:") == 0) pin = line.substr(5);
        else if (line.find("Balance:") == 0) balance = stod(line.substr(9));
    }
    return Account(cnic, name, pin, balance);
}