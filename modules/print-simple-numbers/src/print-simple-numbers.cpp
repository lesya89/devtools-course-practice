// Copyright 2019 by Zolotareva Olesya

#include <iostream>

#include "include/print-simple-numbers.h"

int SimpleNumbers::Check(const int n) {
if (n < 1) return -1;
if (n == 1) {
        return 0;
    } else {
        for (int i = 2; i * i <= n; i++) {
                if (n % i == 0)
                    return 0;
                else
                    return n;
    }
}
}

int SimpleNumbers::print(const int a, const int b) {
if ((b < 1 ) || (a < 1) || (a == b) || (a > b)) {
       std::cout << "error";
       return -1;
}

for (int i = a; i <= b; i++) {
        int tmp = 0;
        tmp = Check(i);
            if (tmp != 0) {
                std::cout << "tmp"<< " ";
                return tmp;
            } else {
                std::cout << " ";
                return 0;
        }
}
}
