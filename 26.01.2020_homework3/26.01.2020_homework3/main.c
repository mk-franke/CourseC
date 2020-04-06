//
//  main.c
//  26.01.2020_homework3
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

    printf("Number 1 is %f\n", a);
    printf("Number 1 is %f\n", b);

    switch(Operator)
    {
        case '+':
            printf("%f + %f = %f", a, b, a+b);
            break;
        case '-':
            printf("%f - %f = %f", a, b, a-b);
            break;
        case '*':
            printf("%f * %f = %f", a, b, a*b);
            break;
        case '/':
            printf("%f / %f = %f", a, b, a/b);
            break;
        default:
            printf("Error! Operator is not correct");
    }

    return 0;
}
