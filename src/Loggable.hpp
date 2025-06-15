
#ifndef LOGGABLE_HPP
#define LOGGABLE_HPP

#include <string>
#include <iostream>

#include "Status.hpp"

class Loggable {

public:
    virtual ~Loggable() {}

    virtual void Print() = 0;

};

#endif