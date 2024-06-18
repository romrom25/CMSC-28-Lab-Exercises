// File: Movie.h
#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Movie {
    private:
        string title;
        string synopsis;
        string mpaa_rating;
        string genres;
        Person directors;
        Person actors;

    public:
        // Constructors
        Movie(){}

        Movie(string movieTitle, string movieSynopsis, string movieRating, string movieGenres, Person movieDirectors, Person mainActor){
            title = movieTitle;
            synopsis = movieSynopsis;
            mpaa_rating = movieRating;
            genres = movieGenres;
            directors = movieDirectors;
            actors = mainActor;
        }

        // Setters
        void setTitle(string movieTitle){
            title = movieTitle;
        }

        void setSynopsis(string movieSynopsis){
            synopsis = movieSynopsis;
        }

        void setRating(string movieRating){
            mpaa_rating = movieRating;
        }

        void setGenres(string movieGenres){
            genres = movieGenres;
        }

        void setDirectors(Person movieDirectors){
            directors = movieDirectors;
        }

        void setMainActor(Person mainActor){
            actors = mainActor;
        }

        // Getters
        string getTitle(){
            return title;
        }

        string getSynopsis(){
            return synopsis;
        }

        string getRating(){
            return mpaa_rating;
        }

        string getGenres(){
            return genres;
        }

        Person getDirectors(){
            return directors;
        }

        Person getMainActor(){
            return actors;
        }
};

#endif // MOVIE_H