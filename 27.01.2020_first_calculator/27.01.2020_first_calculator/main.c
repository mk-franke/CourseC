//
//  main.c
//  27.01.2020_first_calculator
//
//  Created by Marc Kevin Franke on 27.01.2020.
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

    printf("You entered number 1: %f\n", a);
    printf("You entered number 2: %f\n", b);

    int c;
    printf("Enter operation\n");
    printf("1 - sum\n");
    printf("2 - sub\n");
    printf("3 - mult\n");
    printf("4 - div\n");
    fflush(stdout);
    scanf("%d", &c);

    float res1 = calc(a, b, c);
    printf("Result: %.3f\n", res1);

    float res2 = calc(5,8,2);
    printf("Second result: %.3f\n", res2);

    return 0;
}

float calc(float a, float b, int c){
    float res = 0;
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
        if(b==0){
            printf("Error: disaster division by zero\n");
            return res;
        }
        return a/b;
    }
    if(c<1 || c>4){
        printf("Error: wrong operator\n");
    }
    return res;
}
