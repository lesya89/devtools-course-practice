// Copyright 2019 by Zolotareva Olesya

#include <gtest/gtest.h>

#include "include/print-simple-numbers.h"

TEST(SimpleNumberTest, The_Left_Border_Mistake) {
// arrange
SimpleNumbers check_eng;
int a = -1;
int b = 5;
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
// act
res = check_eng.print(a, b);
// assert
EXPECT_EQ(-1, res);
}
   
