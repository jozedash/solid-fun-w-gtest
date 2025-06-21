
#ifndef SOLIDFUN_APIIMPL_HPP
#define SOLIDFUN_APIIMPL_HPP

#include "solidfun/iAPI.hpp"

namespace solidfun {

class APIImpl : public iAPI {
    
public:
    std::shared_ptr<Status> GetResponse(const int value);
};

} // namespace solidfun

#endif