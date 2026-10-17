// Account.h
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using namespace std;

class Account {
public:
    string cnic;
    string name;
    string pin;
    double balance;

    Account();
    Account(string cnic, string name, string pin, double balance);

    void display() const;
    string toTextSection() const;
    static Account fromTextSection(const string& section);
};

#endif // ACCOUNT_H