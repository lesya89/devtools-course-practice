// Copyright 2019 by Zolotareva Olesya

#include <gtest/gtest.h>

#include "include/print-simple-numbers.h"

TEST(SimpleNumberTest, The_Left_Border_Mistake) {
    // arrange
    SimpleNumbers check_eng;
    int a = -1;
    int b = 5;
    int res;
    // act
    res = check_eng.print(a, b);
    // assert
    EXPECT_EQ(-1, res);
}

TEST(SimpleNumbersTest, The_Right_Border_Mistake) {
    // arrange
    SimpleNumbers check_eng;
    int a = 6;
    int b = -7;
    int res;
    // act
    res = check_eng.print(a, b);
    // assert
    EXPECT_EQ(-1, res);
}

TEST(SimpleNumbersTest, The_Null_Border_Mistake) {
    // arrange
    SimpleNumbers check_eng;
    int a = 0;
    int b = 0;
    int res;
    // act
    res = check_eng.print(a, b);
    // assert
    EXPECT_EQ(-1, res);
}

TEST(SimpleNumbersTest, The_Big_Left_Border_Mistake) {
    // arrange
    SimpleNumbers check_eng;
    int a = 6;
    int b = 2;
    int res;
    // act
    res = check_eng.print(a, b);
    // assert
    EXPECT_EQ(-1, res);
}

TEST(SimpleNumbersTest, The_Null_Interval) {
    // arrange
    SimpleNumbers check_eng;
    int a = 5;
    int b = 5;
    int res;
    // act
    res = check_eng.print(a, b);
    // assert
    EXPECT_EQ(-1, res);
}

TEST(SimpleNumbersTest, The_Negative_Number) {
    // arrange
    SimpleNumbers check_eng;
    int n = -5;
    int res;
    // act
    res = check_eng.Check(n);
    // assert
    EXPECT_EQ(-1, res);
}
