#include "gtest/gtest.h"
#include "../src/fizz.h"
using namespace fizz;

TEST(FizzTesting, test1) {
    EXPECT_TRUE(Fizz("Hi"));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}