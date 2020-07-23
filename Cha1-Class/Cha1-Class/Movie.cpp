//
//  Movie.cpp
//  Cha1-Class
//
//  Created by Cong Anh Nguyen on 7/23/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include "Movie.h"
#include <iostream>

Movie::Movie(std::string name, std::string rating, int watched)
: name{name}, rating{rating}, watched{watched} {}

Movie::Movie(const Movie &source)
: Movie{source.name, source.rating, source.watched} {}

Movie::~Movie() {}

void Movie::set_name(std::string name) {
    this->name = name;
}

std::string Movie::get_name() const {
    return name;
}

void Movie::set_rating(std::string rating) {
    this->rating = rating;
}

std::string Movie::get_rating() const {
    return rating;
}

void Movie::set_watched(int watched) {
    this->watched = watched;
}

int Movie::get_watched() const {
    return watched;
}

void Movie::increment_watched() {
    ++watched;
}

void Movie::display() const {
    std::cout << name << ", " << rating << ", " << watched << std::endl;
}
