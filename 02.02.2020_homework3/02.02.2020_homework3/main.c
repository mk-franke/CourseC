//
//  main.c
//  02.02.2020_homework3
//
//  Created by Marc Kevin Franke on 02.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include<stdio.h>

float arithmetic_mean(int x, int y, int z);

int main(){

    int num1, num2, num3;
    printf("Enter 1st number: \n");
    scanf("%d", &num1);
    printf("Enter 2nd number: \n");
    scanf("%d", &num2);
    printf("Enter 3rd number: \n");
    scanf("%d", &num3);
    printf("The arithmetic mean is %.2f\n", arithmetic_mean(num1, num2, num3));

    int a = 11;
    int b = 22;
    int c = 33;
    printf("The arithmetic mean is %.2f\n", arithmetic_mean(a, b, c));

    float result;
    result = arithmetic_mean(111, 222, 333);
    printf("The arithmetic mean is %.2f\n", result);

    return 0;
}

float arithmetic_mean(int x, int y, int z){
//    float res;
//    res = (float)(x+y+z)/3;
//    return res;
    return (float)(x+y+z)/3;
}
