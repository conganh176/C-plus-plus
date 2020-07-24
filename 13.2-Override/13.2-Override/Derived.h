//
//  Derived.h
//  13.2-Override
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef Derived_h
#define Derived_h
#include "Base.h"

class Derived final : public Base {
public:
    virtual void say_hello() const override;
    virtual ~Derived();
};

#endif /* Derived_h */
