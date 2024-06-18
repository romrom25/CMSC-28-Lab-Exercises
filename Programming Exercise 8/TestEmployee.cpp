// File: TestEmployee.cpp
#include <iostream>
#include <string> // for ignoring space in subject
#include "Employee.h" // add Grade.h as a library to this program
using namespace std;

int main(){
    // Initlalization
    string fname, lname, gender, emailAdd, cpNumber;
    string empNum, position, office;
    double salary;

   // Description
    cout << "\n===================" << endl;
    cout << "\nThis program will output details of an employee in UP Mindanao, displaying their name, gender, employee number, position, office, and salary." << endl;
    cout << "\nProgrammed by: Rommel Rutherford M. Yong" << endl;
    cout << "\n===================\n" << endl;

    // Inputs
    cout << "\nEmployee First Name: ";
    getline(cin, fname);

    cout << "\nEmployee Last Name: ";
    getline(cin, lname);

    cout << "\nEmployee Gender: ";
    getline(cin, gender);

    cout << "\nEmployee Number: ";
    getline(cin, empNum);

    cout << "\nPosition: ";
    getline(cin, position);

    cout << "\nOffice: ";
    getline(cin, office);

    cout << "\nSalary: ";
    cin >> salary;

    // Employee Object
    Employee employee(fname, lname, gender, emailAdd, cpNumber, empNum, position, office, salary);

    // Output
    cout << "\nHi, " << employee.getFirstName() << " " << employee.getLastName() << "! Welcome to UP Mindanao and congratulations!";
    cout << " We are pleased to inform you that you are admitted in the " << employee.getOffice() << " program under the Position of " << employee.getPosition();
    cout << " with a salary of Php " << employee.getSalary() << ". Your Employee Number is " << employee.getEmpNum() << "."; 

    return 0;
}