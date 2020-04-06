//
//  main.c
//  22.01.2020_math_examples
//
//  Created by Marc Kevin Franke on 22.01.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include<stdio.h>

int sum(int a, int b);
int exponentiate2(int a);
int exponentiate3(int a);

int main(){
    int res = sum(2,3);
    printf("sum is %d\n", res);

    int a = 2;
    res = exponentiate2(a);
    printf("a exponentiate2 is %d\n", res);
    res = exponentiate3(a);
    printf("a exponentiate3 is %d\n", res);

    return 0;
}

int sum(int a, int b){
    return a+b;
}
int exponentiate2(int a){
    return a*a;
}
int exponentiate3(int a){
    return exponentiate2(a)*a;
}
