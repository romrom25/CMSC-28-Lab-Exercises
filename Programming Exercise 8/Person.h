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
        string emailAdd;
        string cpNumber;

    public:
        // Constructors
        Person(){}

        Person(string firstName, string lastName, string personGender, string personEmailAdd, string personCpNumber){
            fname = firstName;
            lname = lastName;
            gender = personGender;
            emailAdd = personEmailAdd;
            cpNumber = personCpNumber;
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

        void setEmailAdd(string personEmailAdd){
            emailAdd = personEmailAdd;
        }

        void setPersonCpNumber(string personCpNumber){
            cpNumber = personCpNumber;
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

        string getEmailAdd(){
            return emailAdd;
        }

        string getPersonCpNumber(){
            return cpNumber;
        }
};

#endif // PERSON_H