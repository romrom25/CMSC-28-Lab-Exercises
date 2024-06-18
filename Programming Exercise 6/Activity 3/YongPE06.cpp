// File: YongPE06.cpp
#include <iostream>
#include <string>
#include "Movie.h"
#include "Person.h"
using namespace std;

int main(){
    // Initialization
    string title, synopsis, rating, genre;
    string directorFirstName, directorLastName, directorGender;
    string actorFirstName, actorLastName, actorGender;

    // Description
    cout << "\n===================" << endl;
    cout << "\nThis program will show the details of a movie, which includes it's title, synopsis, MPAA rating, genre/s, as well as details about the director and main actor of the movie." << endl;
    cout << "\nProgrammed by: Rommel Rutherford M. Yong" << endl;

    cout << "\n===================\n" << endl;

    // Inputs
    cout << "\nEnter Movie Title: ";
    getline(cin, title);

    cout << "Enter Synopsis: ";
    getline(cin, synopsis);

    cout << "What is its MPAA Rating: ";
    getline(cin, rating);

    cout << "What is the Genre: ";
    getline(cin, genre);

    cout << "\nWho is the Director (First Name): ";
    getline(cin, directorFirstName);

    cout << "Who is the Director (Last Name): ";
    getline(cin, directorLastName);

    cout << "Who is the Director (Gender): ";
    getline(cin, directorGender);

    cout << "\nWho is the Main Actor/Actress (First Name): ";
    getline(cin, actorFirstName);

    cout << "Who is the Main Actor/Actress (Last Name): ";
    getline(cin, actorLastName);

    cout << "Who is the Main Actor/Actress (Gender): ";
    getline(cin, actorGender);

    // Person Object
    Person director(directorFirstName, directorLastName, directorGender);
    Person mainActor(actorFirstName, actorLastName, actorGender);

    // Movie Object
    Movie movie(title, synopsis, rating, genre, director, mainActor);

    // Display Movie Details
    cout << "\n===================\n" << endl;
    cout << "MOVIE DETAILS" << endl;
    cout << "\n===================" << endl;

    cout << "\nMovie Title: " << movie.getTitle() << endl;
    cout << "\nSynopsis: " << movie.getSynopsis() << endl;
    cout << "\nMPAA Rating: " << movie.getRating() << endl;
    cout << "\nGenre: " << movie.getGenres() << endl;
    cout << "\nDirector: " << movie.getDirectors().getFirstName() << " " << movie.getDirectors().getLastName() << endl;
    cout << "\nActor: " << movie.getMainActor().getFirstName() << " " << movie.getMainActor().getLastName() << endl;

    return 0;
}