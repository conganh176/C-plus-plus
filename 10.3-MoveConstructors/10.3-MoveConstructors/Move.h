//
//  Move.h
//  10.3-MoveConstructors
//
//  Created by Cong Anh Nguyen on 7/23/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef _MOVE_H_
#define _MOVE_H_

class Move {
private:
    int *data;
public:
    void set_data_value(int d);
    int get_data_value();
    Move(int d);
    Move(const Move &source);
    Move(Move &&source) noexcept;
    ~Move();
};


#endif /* Move_h */
