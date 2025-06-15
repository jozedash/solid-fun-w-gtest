
#ifndef APIIMPL_HPP
#define APIIMPL_HPP

#include "iAPI.hpp"

class APIImpl : public iAPI {
    
public:
    std::shared_ptr<Status> GetResponse(const int value);
};

#endif