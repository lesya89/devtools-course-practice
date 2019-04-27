// Copyright 2019 by Zolotareva Olesya  

#include "include/print-simple-numbers.h"

int SimpleNumers::Check(int n) {
if(n == 1) 
    return 0;

for (int i = 2; i * i <= n; i++) {
    if(n % i == 0)
        return 0;
    }
return 1;
}

int* SimpleNumers::print(const a, const b) {
if (b - a) < 0
    return -1;
else {
    int *array = new int[(b-a) + 1];
    
    for (int i = a; i <= b; i++)
    { 
        array[i] = Check(i);
    }
    return array;
}
}