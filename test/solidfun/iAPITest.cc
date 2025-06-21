
#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "solidfun/Status.hpp"
#include "solidfun/OK.hpp"
#include "solidfun/iAPIMock.hpp"

namespace solidfun {

TEST(iAPITest, GetResponseTest) {
    iAPIMock mockAPI;
    int test_val = 0;
    auto expectedResponse = std::make_shared<OK>();

    EXPECT_CALL(mockAPI, GetResponse(test_val))
        .WillOnce(testing::Return(expectedResponse));

    auto response = mockAPI.GetResponse(test_val);
    EXPECT_EQ(response->GetStatus(), StatusTypes::kOk);
    EXPECT_EQ(expectedResponse->GetStatus(), StatusTypes::kOk);
}

} // namespace solidfun