// Copyright 2019 by Zolotareva Olesya  

#include "include/print-simple-numbers.h"

int SimpleNumbers::Check(const int n) {
if (n <= 0) {
    return -1;
} else { 
    if(n == 1) 
        return 0;
    else {
        for (int i = 2; i * i <= n; i++) {
                if(n % i == 0)
                    return 0;
                else 
                    return n;
    }
}
}
}

int SimpleNumbers::print(const int a, const int b) {
int tmp = 0;
if ((b <= 0 ) || (a <= 0)) {
       std::cout << "error";
       return -1;        
} else {
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
}
}
