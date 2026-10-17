// Criminal.h
#ifndef CRIMINAL_H
#define CRIMINAL_H

#include <string>
using namespace std;

class Criminal {
public:
    string cnic;
    string name;
    string crime;
    string status;

    Criminal();
    Criminal(string cnic, string name, string crime, string status);

    void display() const;
    string toTextSection() const;
    static Criminal fromTextSection(const string& section);
};

#endif // CRIMINAL_H