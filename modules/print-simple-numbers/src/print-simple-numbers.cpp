// Copyright 2019 by Zolotareva Olesya

#include <iostream>

#include "include/print-simple-numbers.h"

int SimpleNumbers::Check(int n) {
if (n < 1) {
    return -1;
} else {
    if (n == 1) {
        return 0;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return 0; }
        return n;
}
}
}
int SimpleNumbers::print(int a, int b) {
if ((b <= 1) || (a < 1) || (a >= b)) {
       std::cout << "error";
       return -1;
} else {
int tmp = 0;
for (int i = a; i <= b; i++) {
        tmp = Check(i);
            if (tmp != 0) {
                std::cout << "tmp"<< " ";
                return tmp;
            } else {
                std::cout << " ";
                return 0;
        }
}
return tmp;
}
}
