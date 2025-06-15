
#ifndef WARN_HPP
#define WARN_HPP

#include <string>
#include <iostream>

#include "Status.hpp"

class Warn : public Status {

public:
    Warn(const std::string& message)
    : Status(StatusTypes::kWarn)
    , message_(message)
    {}

    void Print()
    {
        std::cout << "Warn: " << message_ << std::endl;
    }

private:
    const std::string message_;
};

#endif