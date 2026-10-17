// Employee.h
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
public:
    string cnic;
    string name;
    string qualification;
    string institute;
    string speciality;
    int grade;

    Employee();
    Employee(string cnic, string name, string qualification, string institute, string speciality, int grade);

    void display() const;
    string toTextSection() const;
    static Employee fromTextSection(const string& section);
};

#endif // EMPLOYEE_H