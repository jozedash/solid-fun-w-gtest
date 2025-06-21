
#ifndef SOLIDFUN_ERROR_HPP
#define SOLIDFUN_ERROR_HPP

#include <string>
#include <iostream>
// #include <stacktrace>

#include "solidfun/Status.hpp"

namespace solidfun {

class Error : public Status {

public:
    Error(const std::string& message)
    : Status(StatusTypes::kError)
    , message_(message)
    {

    }

    void Print() const
    {
        std::cout << "Error: " << message_ << std::endl;
    }

private:
    const std::string message_;
    // const std::basic_stacktrace stacktrace_;
};

} // namespace solidfun

#endif