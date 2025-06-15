
#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "../src/Status.hpp"
#include "../src/OK.hpp"
#include "../mocks/iAPIMock.hpp"

TEST(iAPITest, GetResponseTest) {
    iAPIMock mockAPI;
    int testValue = 0;
    auto expectedResponse = std::make_shared<OK>();

    EXPECT_CALL(mockAPI, GetResponse(testValue))
        .WillOnce(testing::Return(expectedResponse));

    auto response = mockAPI.GetResponse(testValue);
    EXPECT_EQ(response->GetStatus(), StatusTypes::kOk);
    EXPECT_EQ(expectedResponse->GetStatus(), StatusTypes::kOk);
}