//
//  main.c
//  26.01.2020_homework4
//
//  Created by Marc Kevin Franke on 26.01.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include <stdio.h>

int main(){
    
    char Operator;
    float a;
    float b;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &Operator);
    printf("Enter number 1: ");
    scanf("%f", &a);
    printf("Enter number 2: ");
    scanf("%f", &b);

    float sum1 = a+b;
    float sum2 = a-b;
    float sum3 = a*b;
    float sum4 = a/b;

    switch(Operator)
    {
        case '+':
            printf("Addition = %f", sum1);
            break;
        case '-':
            printf("Subtraction = %f", sum2);
            break;
        case '*':
            printf("Multiplication = %f", sum3);
            break;
        case '/':
            printf("Division = %f", sum4);
            break;
        default:
            printf("Error! Operator is not correct");
    }

    return 0;
}
