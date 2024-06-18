// File: TestStudent.cpp
#include <iostream>
#include <string> // for ignoring space in subject
#include "Student.h" // add Grade.h as a library to this program
using namespace std;

int main(){
    // Initialization
    string fname, lname, gender, emailAdd, cpNumber;
    string studentNum, course, department, college;
    double salary;

    // Description
    cout << "\n===================" << endl;
    cout << "\nThis program will output details of a student in UP Mindanao, displaying their name, gender, student number, course, department, and college." << endl;
    cout << "\nProgrammed by: Rommel Rutherford M. Yong" << endl;
    cout << "\n===================\n" << endl;

    // Inputs
    cout << "\nStudent First Name: ";
    getline(cin, fname);

    cout << "\nStudent Last Name: ";
    getline(cin, lname);

    cout << "\nStudent Gender: ";
    getline(cin, gender);

    cout << "\nStudent Number: ";
    getline(cin, studentNum);

    cout << "\nCourse: ";
    getline(cin, course);

    cout << "\nDepartment: ";
    getline(cin, department);

    cout << "\nCollege: ";
    getline(cin, college);

    // Student Object
    Student student(fname, lname, gender, emailAdd, cpNumber, studentNum, course, department, college);

    // Output
    cout << "\nHi, " << student.getFirstName() << " " << student.getLastName() << "! Welcome to UP Mindanao and congratulations!";
    cout << " We are pleased to inform you that you are admitted in the " << student.getCourse() << " program under the Department of " << student.getDepartment();
    cout << ", College of " << student.getCollege() << ". Your Student Number is " << student.getStudentNum() << "."; 

    return 0;
}
