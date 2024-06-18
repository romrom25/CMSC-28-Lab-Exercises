// File: Personobject.cpp
#include <iostream>
#include <string> // for ignoring space in subject
#include "Person.h" // add Person.h as a library to this program
#include "Grade.h" // add Grade.h as a library to this program
using namespace std;

int main(){
    int age, grade;
    char gender;
    string subject;

    cout << "Creating the 1st Person object (p) using the 1st Constructor" << endl;
    Person person;
    Grades grades;

    do {
        cout << "\nInput age: ";
        cin >> age;
        if (age < 0 || age > 127) cout << "Invalid age. Please input a valid age (0-127)." << endl;
    } while (age < 0 || age > 127);
    person.setage(age);

    do {
        cout << "\nInput gender: ";
        cin >> gender;
        if (gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f') cout << "Invalid gender. Please input a valid gender at birth (M or F)." << endl;
    } while (gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f');
    person.setgender(gender);

    cout << "\nInput subject: ";
    cin.ignore();
    getline(cin, subject);
    grades.setSubject(subject);

    do {
        cout << "\nInput grade: ";
        cin >> grade;
        if(grade < 0 || grade > 100) cout << "Invalid grade. Please input a valid grade (0-100)." << endl;
    } while (grade < 0 || grade > 100);
    grades.setGrade(grade);

    cout << "\n==========================" << endl;
    cout << "Age = " << person.getage() << endl;
    cout << "Gender = " << person.getgender() << endl;
    cout << "Subject = " << grades.getSubject() << endl;
    cout << "Grade = " << grades.getGrade() << endl;
    if (grade >= 60) cout << "Status: You passed!!!" << endl;
    else cout << "Status: You failed!!!" << endl;
    cout << "==========================\n" << endl;

    return 0;
}