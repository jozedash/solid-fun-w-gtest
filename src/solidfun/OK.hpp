
#ifndef SOLIDFUN_OK_HPP
#define SOLIDFUN_OK_HPP

#include <string>
#include <iostream>

#include "solidfun/Status.hpp"

namespace solidfun {

class OK : public Status {

public:

    OK()
    : Status(StatusTypes::kOk)
    {}

    void Print() const
    {
        std::cout << "OK!" << std::endl;
    }

};

} // namespace solidfun

#endif