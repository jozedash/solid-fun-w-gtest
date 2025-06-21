
#ifndef SOLIDFUN_LOGGABLE_HPP
#define SOLIDFUN_LOGGABLE_HPP

#include <string>
#include <iostream>

#include "solidfun/Status.hpp"

namespace solidfun {

class Loggable {

public:
    virtual ~Loggable() {}

    virtual void Print() const = 0;

};

} // namespace solidfun

#endif