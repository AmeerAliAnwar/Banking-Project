// Transaction.cpp
#include "Transaction.h"
#include <iostream>
#include <sstream>

Transaction::Transaction() : cnic(""), type(""), amount(0.0), balanceBefore(0.0), balanceAfter(0.0) {}

Transaction::Transaction(string cnic, string type, double amount, double balanceBefore, double balanceAfter)
    : cnic(cnic), type(type), amount(amount), balanceBefore(balanceBefore), balanceAfter(balanceAfter) {}

void Transaction::display() const {
    cout << "CNIC: " << cnic << endl;
    cout << "Type: " << type << endl;
    cout << "Amount: " << amount << endl;
    cout << "Balance Before: " << balanceBefore << endl;
    cout << "Balance After: " << balanceAfter << endl;
}

string Transaction::toTextSection() const {
    ostringstream oss;
    oss << "---TRANSACTION---\n";
    oss << "CNIC: " << cnic << "\n";
    oss << "Type: " << type << "\n";
    oss << "Amount: " << amount << "\n";
    oss << "BalanceBefore: " << balanceBefore << "\n";
    oss << "BalanceAfter: " << balanceAfter << "\n";
    oss << "--------------------\n";
    return oss.str();
}

Transaction Transaction::fromTextSection(const string& section) {
    istringstream iss(section);
    string line, cnic, type;
    double amount = 0.0, balanceBefore = 0.0, balanceAfter = 0.0;
    while (getline(iss, line)) {
        if (line.find("CNIC:") == 0) cnic = line.substr(6);
        else if (line.find("Type:") == 0) type = line.substr(6);
        else if (line.find("Amount:") == 0) amount = stod(line.substr(8));
        else if (line.find("BalanceBefore:") == 0) balanceBefore = stod(line.substr(14));
        else if (line.find("BalanceAfter:") == 0) balanceAfter = stod(line.substr(13));
    }
    return Transaction(cnic, type, amount, balanceBefore, balanceAfter);
}