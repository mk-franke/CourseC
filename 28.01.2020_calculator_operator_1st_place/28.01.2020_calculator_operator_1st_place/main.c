//
//  main.c
//  28.01.2020_calculator_operator_1st_place
//
//  Created by Marc Kevin Franke on 28.01.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include <stdio.h>

int main(){

    char operator;
    float a;
    float b;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter number 1: ");
    scanf("%f", &a);
    printf("Enter number 2: ");
    scanf("%f", &b);

    printf("Number 1 is: %.2f\n", a);
    printf("Number 2 is: %.2f\n", b);

    switch(operator)
    {
        case '+':
            printf("%.2f + %.2f = %.2f", a, b, a+b);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f", a, b, a-b);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f", a, b, a*b);
            break;
        case '/':
            if (b == 0){
                printf("Error: division by 0\n");
            }
            else {
                printf("%.2f / %.2f = %.2f", a, b, a/b);
            }
            break;
        default:
            printf("Error! Operator is not correct");
    }

    return 0;
}
