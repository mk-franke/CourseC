//
//  main.c
//  29.01.2020_call_function
//
//  Created by Marc Kevin Franke on 29.01.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include<stdio.h>

float median(int a, int b);

int main(){

    int x = 10;
    int y = 13;
    printf("%.2f\n", median(x, y));

    float result;
    result = median(124, 315);
    printf("%.2f\n", result);

    return 0;
}

float median(int a, int b){
    float res;
    res = (float)(a+b)/2;
    return res;
    //return (float)(a+b)/2; более короткий вариант записи
}
