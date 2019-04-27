// Copyright 2019 by Zolotareva Olesya  

#include "include/print-simple-numbers.h"

int SimpleNumbers::Check(int n) {
if(n == 1) 
    return 0;

for (int i = 2; i * i <= n; i++) {
    if(n % i == 0)
        return 0;
    else 
        return n;
    }
}

int* SimpleNumbers::array(const int a, const int b) {
if ((b - a) <= 0)
    break;
else {
    int *array = new int[(b-a) + 1];
    
    for (int i = a; i <= b; i++) { 
        array[i] = Check(i);
    }
    return array;
}
}

void SimpleNumbers::print(int *array, const int a, const int b) {
    if ((b - a) <=0
    for (int i = a; i <= b; i++)
        if (array[i] != 0)
          cout << array[i] << " ";
}