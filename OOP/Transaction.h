// Transaction.h
#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
using namespace std;

class Transaction {
public:
    string cnic;
    string type;
    double amount;
    double balanceBefore;
    double balanceAfter;

    Transaction();
    Transaction(string cnic, string type, double amount, double balanceBefore, double balanceAfter);

    void display() const;
    string toTextSection() const;
    static Transaction fromTextSection(const string& section);
};

#endif // TRANSACTION_H