//
//  main.c
//  28.01.2020_calculator_homework
//
//  Created by Marc Kevin Franke on 28.01.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include<stdio.h>

float calc(float a, float b, int c);

int main(){

    float a, b;
    printf("Enter number 1:\n");
    fflush(stdout);
    scanf("%f", &a);

    printf("Enter number 2:\n");
    fflush(stdout);
    scanf("%f", &b);

    printf("You entered number 1: %.2f\n", a);
    printf("You entered number 2: %.2f\n", b);

    int c;
    printf("Enter operation\n");
    printf("1 - sum\n");
    printf("2 - sub\n");
    printf("3 - mult\n");
    printf("4 - div\n");
    fflush(stdout);
    scanf("%d", &c);

    float res = calc(a, b, c);
    if(b==0 && c==4){
        printf("Error: disaster division by zero\n");
    }
    else if(c<1 || c>4){
        printf("Error: wrong operator\n");
    }
    else {
        printf("Result: %.2f\n", res);
    }

    return 0;
}

float calc(float a, float b, int c){
    float res;
    if(c==1){
        return a+b;
    }
    if(c==2){
        return a-b;
    }
    if(c==3){
        return a*b;
    }
    if(c==4){
        return a/b;
    }
    return res;
}
