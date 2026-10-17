// Criminal.cpp
#include "Criminal.h"
#include <iostream>
#include <sstream>

Criminal::Criminal() : cnic(""), name(""), crime(""), status("") {}

Criminal::Criminal(string cnic, string name, string crime, string status)
    : cnic(cnic), name(name), crime(crime), status(status) {}

void Criminal::display() const {
    cout << "CNIC: " << cnic << endl;
    cout << "Name: " << name << endl;
    cout << "Crime: " << crime << endl;
    cout << "Status: " << status << endl;
}

string Criminal::toTextSection() const {
    ostringstream oss;
    oss << "---CRIMINAL---\n";
    oss << "CNIC: " << cnic << "\n";
    oss << "Name: " << name << "\n";
    oss << "Crime: " << crime << "\n";
    oss << "Status: " << status << "\n";
    oss << "--------------------\n";
    return oss.str();
}

Criminal Criminal::fromTextSection(const string& section) {
    istringstream iss(section);
    string line, cnic, name, crime, status;
    while (getline(iss, line)) {
        if (line.find("CNIC:") == 0) cnic = line.substr(6);
        else if (line.find("Name:") == 0) name = line.substr(6);
        else if (line.find("Crime:") == 0) crime = line.substr(7);
        else if (line.find("Status:") == 0) status = line.substr(8);
    }
    return Criminal(cnic, name, crime, status);
}