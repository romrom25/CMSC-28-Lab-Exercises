// File: Grade.h
#include <iostream>
using namespace std;

class Grades{
    private:
        string subject;
        int grade;

    public:
        Grades(){}

        Grades(string newSubject){
            subject = newSubject;
            grade = 80;
        }

        Grades(string newSubject, int newGrade){
            subject = newSubject;
            grade = newGrade;
        }

        void setSubject(string newSubject){
            subject = newSubject;
        }

        string getSubject(){
            return subject;
        }

        void setGrade(int newGrade){
            if(newGrade >= 0){
                grade = newGrade;
            }
            else {
                cout << "Invalid input" << endl;
            }
        }

        int getGrade(){
            return grade;
        }

        void view(string subject, int grade){
            cout << "Subject: " << subject << endl;
            cout << "Grade: " << grade << endl;
        }
};