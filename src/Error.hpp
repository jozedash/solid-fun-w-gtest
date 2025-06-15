
#ifndef ERROR_HPP
#define ERROR_HPP

#include <string>
#include <iostream>
// #include <stacktrace>

#include "Status.hpp"

class Error : public Status {

public:
    Error(const std::string& message)
    : Status(StatusTypes::kError)
    , message_(message)
    {

    }

    void Print()
    {
        std::cout << "Error: " << message_ << std::endl;
    }

private:
    const std::string message_;
    // const std::basic_stacktrace stacktrace_;
};

#endif