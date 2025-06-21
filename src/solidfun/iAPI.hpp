
#ifndef SOLIDFUN_IAPI_HPP
#define SOLIDFUN_IAPI_HPP

#include <memory>

#include "solidfun/Status.hpp"

namespace solidfun {

class iAPI {

public:
    virtual std::shared_ptr<Status> GetResponse(const int value) = 0;
};

} // namespace solidfun

#endif