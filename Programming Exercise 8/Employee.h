// File: Employee.h
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

class Employee : public Person {
private:
    string empNum;

public:
    string position;
    string office;
    double salary;

    // Constructors
    Employee() {}

    Employee(string firstName, string lastName, string personGender, string personEmailAdd, string personCpNumber, string personEmpNum, string personPosition, string personOffice, double personSalary)
        : Person(firstName, lastName, personGender, personEmailAdd, personCpNumber), empNum(personEmpNum), position(personPosition), office(personOffice), salary(personSalary) {}

    // Setters
    void setEmpNum(const string &personEmpNum) {
        empNum = personEmpNum;
    }

    void setPosition(const string &personPosition) {
        position = personPosition;
    }

    void setOffice(const string &personOffice) {
        office = personOffice;
    }

    void setSalary(double personSalary) {
        salary = personSalary;
    }

    // Getters
    string getEmpNum() const {
        return empNum;
    }

    string getPosition() const {
        return position;
    }

    string getOffice() const {
        return office;
    }

    double getSalary() const {
        return salary;
    }
};

#endif // EMPLOYEE_H
