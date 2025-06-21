
#include "APIImpl.hpp"
#include "OK.hpp"
#include "Warn.hpp"
#include "Error.hpp"

namespace solidfun {

std::shared_ptr<Status> APIImpl::GetResponse(const int value)
{
    switch (value) {
    case 0:
        {
            return std::make_shared<OK>(OK());
        }
    case 1:
        {
            return std::make_shared<Warn>(Warn("This is a warning"));
        }
    default:
        {
            return std::make_shared<Error>(Error("This is an error"));
        }
    }

    return std::make_shared<Error>(Error("How did you get here?"));
}

} // namespace solidfun