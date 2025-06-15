
#ifndef OK_HPP
#define OK_HPP

#include <string>
#include <iostream>

#include "Status.hpp"

class OK : public Status {

public:

    OK()
    : Status(StatusTypes::kOk)
    {}

    void Print()
    {
        std::cout << "OK!" << std::endl;
    }

};

#endif