#include <gtest/gtest.h>
#include "mathlib.h"

TEST(FactorialTest, PositiveNumbers) {
    EXPECT_EQ(factorial(5), 120);
    EXPECT_EQ(factorial(0), 1);
    EXPECT_EQ(factorial(1), 1);
}

TEST(PrimeTest, BasicTests) {
    EXPECT_TRUE(is_prime(7));
    EXPECT_FALSE(is_prime(4));
    EXPECT_FALSE(is_prime(1));
}
