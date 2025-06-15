#include <gmock/gmock.h>
#include "../src/iAPI.hpp"

class iAPIMock : public iAPI {
public:
    MOCK_METHOD(std::shared_ptr<Status>, GetResponse, (const int value), (override));

};


