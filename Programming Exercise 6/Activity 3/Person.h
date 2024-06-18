// File: Person.h
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
        string fname;
        string lname;
        string gender;

    public:
        // Constructors
        Person(){}

        Person(string firstName, string lastName, string personGender){
            fname = firstName;
            lname = lastName;
            gender = personGender;
        }

        // Setters
        void setFirstName(string firstName){
            fname = firstName;
        }

        void setLastName(string lastName){
            lname = lastName;
        }

        void setGender(string personGender){
            gender = personGender;
        }

        // Getters
        string getFirstName(){
            return fname;
        }

        string getLastName(){
            return lname;
        }

        string getGender(){
            return gender;
        }
};

#endif // PERSON_H