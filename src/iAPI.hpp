
#ifndef IAPI_HPP
#define IAPI_HPP

#include <memory>

#include "Status.hpp"

class iAPI {

public:
    virtual std::shared_ptr<Status> GetResponse(const int value) = 0;
};

#endif