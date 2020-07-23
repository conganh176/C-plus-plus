//
//  main.cpp
//  Cha1-Class
//
//  Created by Cong Anh Nguyen on 7/23/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "Movies.h"

void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating, int watched);

int main(int argc, const char * argv[]) {
    Movies my_movies;
    my_movies.display();
    
    add_movie(my_movies, "Alpha", "E", 100);
    add_movie(my_movies, "Beta", "PG", 420);
    add_movie(my_movies, "Charlies", "PG", 69);
    
    my_movies.display();
    
    add_movie(my_movies, "Charlies", "PG", 69);
    add_movie(my_movies, "Omega", "PG-13", 25);
    
    my_movies.display();
    
    increment_watched(my_movies, "Beta");
    increment_watched(my_movies, "Charlies");
    increment_watched(my_movies, "Xavier");
    
    return 0;
}

void increment_watched(Movies &movies, std::string name) {
    if (movies.increament_watched(name)) {
        std::cout << name << " watch incremented" << std::endl;
    }
    else {
        std::cout << name << " not found" << std::endl;
    }
}

void add_movie(Movies &movies, std::string name, std::string rating, int watched) {
    if (movies.add_movie(name, rating, watched)) {
        std::cout << name << " added" << std::endl;
    }
    else {
        std::cout << name << " already exists" << std::endl;
    }
}
