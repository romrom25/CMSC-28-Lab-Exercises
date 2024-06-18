// File: Student.h
#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <string>
using namespace std;

class Student : public Person {
private:
    string studentNum;

public:
    string course;
    string department;
    string college;

    // Constructors
    Student() {}

    Student(string firstName, string lastName, string personGender, string personEmailAdd, string personCpNumber, string personStudentNum, string personCourse, string personDepartment, string personCollege)
        : Person(firstName, lastName, personGender, personEmailAdd, personCpNumber), studentNum(personStudentNum), course(personCourse), department(personDepartment), college(personCollege) {}

    // Setters
    void setStudentNum(const string &personStudentNum) {
        studentNum = personStudentNum;
    }

    void setCourse(const string &personCourse) {
        course = personCourse;
    }

    void setDepartment(const string &personDepartment) {
        department = personDepartment;
    }

    void setCollege(const string &personCollege) {
        college = personCollege;
    }

    // Getters
    string getStudentNum() const {
        return studentNum;
    }

    string getCourse() const {
        return course;
    }

    string getDepartment() const {
        return department;
    }

    string getCollege() const {
        return college;
    }
};

#endif // STUDENT_H
