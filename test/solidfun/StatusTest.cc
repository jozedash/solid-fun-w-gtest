#include <sstream>

#include <gtest/gtest.h>
#include "solidfun/Status.hpp"
#include "solidfun/OK.hpp"

namespace solidfun {

TEST(StatusTest, OKGetResponseTest) {
    auto ok = OK();

    EXPECT_EQ(ok.GetStatus(), StatusTypes::kOk);

    // temporarily redirect cout to stringstream so we can catch log output:
    std::stringstream output;
    std::streambuf* old_cout = std::cout.rdbuf(output.rdbuf());
    ok.Print();
    EXPECT_TRUE(output.str().compare("OK!") != 0);
    // restore cout buffer
    std::cout.rdbuf(old_cout);
}

} // namespace solidfun