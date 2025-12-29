#include <gtest/gtest.h>
#include <spdlog/spdlog.h>
#include "../include/calculator.h"

int a = 5;
int b = 3;



TEST(CalculatorTest, Add) {
    spdlog::set_level(spdlog::level::info);  // Show debug and above; change to info for production
    spdlog::set_pattern("[%Y-%m-%d %H:%M:%S] [%l] %v");  // Custom format: timestamp, level, message
    spdlog::info("Calculator started");
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
     if (b != 0) {
    EXPECT_EQ(c.divide(6, 2), 3);
    EXPECT_EQ(c.divide(5, 2), 2);   // integer division
   
        
    }
    else{
        spdlog::error("Division by zero attempted in test");
    
    }


}




TEST(CalculatorTest, DivideByZero) {
    spdlog::set_level(spdlog::level::info);  // Show debug and above; change to info for production
    spdlog::set_pattern("[%Y-%m-%d %H:%M:%S] [%l] %v");  // Custom format: timestamp, level, message
    spdlog::info("Division by Zero is expected to fail");
    Calculator c;
    EXPECT_THROW(c.divide(10, 0), std::invalid_argument);
}