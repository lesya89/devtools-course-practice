// Copyright 2019 by Zolotareva Olesya  

#include "include/print-simple-numbers.h"

int SimpleNumbers::Check(const int n) {
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

void SimpleNumbers::print(const int a, const int b) {
int tmp = 0;
if ((b <= 0 ) || (a <= 0)) {
        cout << "error";
        
    } else {
    for (int i = a; i <= b; i++) { 
        tmp = Check(i);
        if (tmp != 0) {
            cout << "tmp"<< " ";
        } else {
            cout << " ";
        }
}
}
}
