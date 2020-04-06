//
//  main.c
//  26.01.2020_homework2
//
//  Created by Marc Kevin Franke on 26.01.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include <stdio.h>

int main(){

    float a;
    float b;

    printf("Enter number 1: ");
    scanf("%f", &a);
    printf("Enter number 2: ");
    scanf("%f", &b);

    printf("Number 1 is %f\n", a);
    printf("Number 2 is %f\n", b);

    float sum1 = a+b;
    printf("Addition = %f\n", sum1);
    float sum2 = a-b;
    printf("Subtraction = %f\n", sum2);
    float sum3 = a*b;
    printf("Multiplication = %f\n", sum3);
    float sum4 = a/b;
    printf("Division = %f\n", sum4);

    return 0;
}
