
#ifndef SOLIDFUN_STATUS_HPP
#define SOLIDFUN_STATUS_HPP

#include <string>

#include "solidfun/Loggable.hpp"

namespace solidfun {

enum StatusTypes {
    kOk = 0,
    kWarn,
    kError
};

class Status : public Loggable {

protected:
    Status(const StatusTypes status_type)
    : status_type_(status_type)
    {}

public:

    virtual ~Status() {}
    
    virtual const StatusTypes GetStatus()
    {
        return status_type_;
    }

private:
    const StatusTypes status_type_;
};

} // namespace solidfun

#endif