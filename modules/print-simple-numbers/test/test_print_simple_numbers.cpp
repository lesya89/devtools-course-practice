// Copyright 2019 by Zolotareva Olesya

#include <gtest/gtest.h>

#include "include/print-simple-numbers.h"

TEST(SimpleNumberTet, InNullSizeArray) {
// arrange
SimpleNumbers check_eng;
int a = -1;
int b = 5;
// act
res = check_eng(a, b);
// assert
EXPECT_EQ(-1, res);
}