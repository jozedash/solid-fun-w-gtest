
#ifndef SOLIDFUN_WARN_HPP
#define SOLIDFUN_WARN_HPP

#include <string>
#include <iostream>

#include "solidfun/Status.hpp"

namespace solidfun {

class Warn : public Status {

public:
    Warn(const std::string& message)
    : Status(StatusTypes::kWarn)
    , message_(message)
    {}

    void Print() const
    {
        std::cout << "Warn: " << message_ << std::endl;
    }

private:
    const std::string message_;
};

} // namespace solidfun

#endif