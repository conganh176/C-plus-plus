//
//  Movie.h
//  Cha1-Class
//
//  Created by Cong Anh Nguyen on 7/23/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>

class Movie {
private:
    std::string name;
    std::string rating;
    int watched;
public:
    Movie(std::string name, std::string rating, int watched);
    Movie(const Movie &source);
    ~Movie();
    
    void set_name(std::string name);
    std::string get_name() const;
    void set_rating(std::string rating);
    std::string get_rating() const;
    void set_watched(int watched);
    int get_watched() const;
    
    void increment_watched();
    void display() const;
};

#endif /* Movie_h */
