#include <gtest/gtest.h>
#include "../include/calculator.h"

TEST(CalculatorTest, Add) {
    calculator c;
    EXPECT_EQ(c.add(2, 3), 5);
    EXPECT_EQ(c.add(-1, 1), 0);
}

TEST(CalculatorTest, Subtract) {
    calculator c;
    EXPECT_EQ(c.sub(5, 3), 2);
    EXPECT_EQ(c.sub(0, 5), -5);
}

TEST(CalculatorTest, Multiply) {
    calculator c;
    EXPECT_EQ(c.mult(4, 3), 12);
}

TEST(CalculatorTest, Divide) {
    calculator c;
    EXPECT_EQ(c.div(6, 0), 3);
    EXPECT_EQ(c.div(5, 2), 2);   // integer division
}