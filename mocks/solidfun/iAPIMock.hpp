#include <gmock/gmock.h>
#include "solidfun/iAPI.hpp"

namespace solidfun {

class iAPIMock : public iAPI {
public:
    MOCK_METHOD(std::shared_ptr<Status>, GetResponse, (const int value), (override));

};

} // namespace solidfun


