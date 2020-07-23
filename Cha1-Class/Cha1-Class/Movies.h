//
//  Movies.h
//  Cha1-Class
//
//  Created by Cong Anh Nguyen on 7/23/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <vector>
#include <string>
#include "Movie.h"

class Movies {
private:
    std::vector<Movie> movies;
public:
    Movies();
    ~Movies();
    bool add_movie(std::string name, std::string rating, int watched);
    bool increament_watched(std::string name);
    void display() const;
};

#endif /* Movies_h */
