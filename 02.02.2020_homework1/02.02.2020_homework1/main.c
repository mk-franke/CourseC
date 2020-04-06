//
//  main.c
//  02.02.2020_homework1
//
//  Created by Marc Kevin Franke on 02.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include<stdio.h>

void answer(int a);
int test(int x);

int main(){

    int num1;
    printf("Enter any number: \n");
    scanf("%d", &num1);

    answer(num1);

    return 0;
}

void answer(int a){
//    (test(a) == 0) ? printf("The number %d is even", a) : printf("The number %d is odd", a); // короче
    if(test(a) == 0){
        printf("The number %d is even", a);
    } else {
        printf("The number %d is odd", a);
    }
}

int test(int x){
    if(x%2 == 0){
        return 0;
    } else {
        return 1;
    }
}
