//
//  main.c
//  22.01.2020_variable
//
//  Created by Marc Kevin Franke on 22.01.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include<stdio.h>

int main(){
    int a = 10;
    printf("Variable a1 is %d\n", a);
    a = 15;
    printf("Variable a2 is %d\n", a);
    a = 5 + 3;
    printf("Variable a3 is %d\n", a);

    int b = 20;
    printf("Variable b is %d\n", b);
    int c = a+b;
    printf("Variable c is %d\n", c);
    int d = c*b;
    printf("Variable d is %d\n", d);
    float e = (float)d/3;
    printf("Variable e is %f\n", e);
    float f = d/3;
    printf("Variable f is %f\n", f);
    int r = 12345678%10;  // остаток от деления на 10, выделяется знаком %
    printf("Variable r is %d\n", r);

    printf("%s %d %c", "hello world", 5, 'f');
    return 0;
}
