#include <gtest/gtest.h>
#include "../include/calculator.h"

TEST(CalculatorTest, Add) {
    Calculator c;
    EXPECT_EQ(c.add(2, 3), 5);
    EXPECT_EQ(c.add(-1, 1), 0);
}

TEST(CalculatorTest, Subtract) {
    Calculator c;
    EXPECT_EQ(c.subtract(5, 3), 2);
    EXPECT_EQ(c.subtract(0, 5), -5);
}

TEST(CalculatorTest, Multiply) {
    Calculator c;
    EXPECT_EQ(c.multiply(4, 3), 12);
}

TEST(CalculatorTest, Divide) {
    Calculator c;
    EXPECT_EQ(c.divide(6, 2), 3);
    EXPECT_EQ(c.divide(5, 2), 2);   // integer division
}

TEST(CalculatorTest, DivideByZero) {
    Calculator c;
    EXPECT_THROW(c.divide(10, 0), std::invalid_argument);
}