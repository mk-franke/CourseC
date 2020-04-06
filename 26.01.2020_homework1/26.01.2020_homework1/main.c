//
//  main.c
//  26.01.2020_homework1
//
//  Created by Marc Kevin Franke on 26.01.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include <stdio.h>

float sum1(float a, float b);
float sum2(float a, float b);
float sum3(float a, float b);
float sum4(float a, float b);

int main()
{
    float a;
    float b;
    float sum;

    printf("Enter number 1: ");
    scanf("%f", &a);
    printf ("Enter number 2: ");
    scanf("%f", &b);

    printf("Number 1 = %f\n", a);
    printf("Number 2 = %f\n", b);

    sum = sum1(a,b);
    printf("Addition is %f\n", sum);
    sum = sum2(a,b);
    printf("Subtraction is %f\n", sum);
    sum = sum3(a,b);
    printf("Multiplication is %f\n", sum);
    sum = sum4(a,b);
    printf("Division is %f\n", sum);

    return 0;
}

float sum1(float a, float b){
    return a+b;
}

float sum2(float a, float b){
    return a-b;
}

float sum3(float a, float b){
    return a*b;
}

float sum4(float a, float b){
    return a/b;
}
