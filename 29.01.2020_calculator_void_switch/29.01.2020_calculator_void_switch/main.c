//
//  main.c
//  29.01.2020_calculator_void_switch
//
//  Created by Marc Kevin Franke on 29.01.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include<stdio.h>

void calc1(float a, float b, int oper);
void calc2(float a, float b, char oper);

int main(){

    calc1(3.14, 1.25, 5);
    float a = 1.25;
    float b = 3.12;
    int oper = 4;

    char operation = '-';

    printf("\n");

    calc1(a, b, oper);
    printf("\n");
    calc2(a, b, operation);
    printf("\n");
    calc2(3.14, 1.25, 'v');

    return 0;
}

void calc1(float a, float b, int oper){
    if (oper==1){
        printf("%.2f", a+b);
    }
    if (oper==2){
        printf("%.2f", a-b);
    }
    if (oper==3){
        printf("%.2f", a*b);
    }
    if (oper==4){
        if (b==0){
            printf("Error");
        } else {
            printf("%.2f", a/b);
        }
    }
    if (oper<0 || oper>4){
        printf("Error");
    }
}

void calc2(float a, float b, char oper){
    switch(oper){
    case '+':
        printf("%.2f", a+b);
        break;
    case '-':
        printf("%.2f", a-b);
        break;
    case '*':
        printf("%.2f", a*b);
        break;
    case '/':
        if (b==0){
            printf("Error");
            break;
        } else {
            printf("%.2f", a/b);
            break;
        }
    default:
        printf("Error");
    }
}
