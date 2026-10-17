// Employee.cpp
#include "Employee.h"
#include <iostream>
#include <sstream>

Employee::Employee() : cnic(""), name(""), qualification(""), institute(""), speciality(""), grade(0) {}

Employee::Employee(string cnic, string name, string qualification, string institute, string speciality, int grade)
    : cnic(cnic), name(name), qualification(qualification), institute(institute), speciality(speciality), grade(grade) {}

void Employee::display() const {
    cout << "CNIC: " << cnic << endl;
    cout << "Name: " << name << endl;
    cout << "Qualification: " << qualification << endl;
    cout << "Institute: " << institute << endl;
    cout << "Speciality: " << speciality << endl;
    cout << "Grade: " << grade << endl;
}

string Employee::toTextSection() const {
    ostringstream oss;
    oss << "---EMPLOYEE---\n";
    oss << "CNIC: " << cnic << "\n";
    oss << "Name: " << name << "\n";
    oss << "Qualification: " << qualification << "\n";
    oss << "Institute: " << institute << "\n";
    oss << "Speciality: " << speciality << "\n";
    oss << "Grade: " << grade << "\n";
    oss << "--------------------\n";
    return oss.str();
}

Employee Employee::fromTextSection(const string& section) {
    istringstream iss(section);
    string line, cnic, name, qualification, institute, speciality;
    int grade = 0;
    while (getline(iss, line)) {
        if (line.find("CNIC:") == 0) cnic = line.substr(6);
        else if (line.find("Name:") == 0) name = line.substr(6);
        else if (line.find("Qualification:") == 0) qualification = line.substr(14);
        else if (line.find("Institute:") == 0) institute = line.substr(11);
        else if (line.find("Speciality:") == 0) speciality = line.substr(12);
        else if (line.find("Grade:") == 0) grade = stoi(line.substr(7));
    }
    return Employee(cnic, name, qualification, institute, speciality, grade);
}