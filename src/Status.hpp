
#ifndef STATUS_HPP
#define STATUS_HPP

#include <string>

#include "Loggable.hpp"

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

#endif