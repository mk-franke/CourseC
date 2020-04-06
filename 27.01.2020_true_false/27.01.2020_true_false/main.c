//
//  main.c
//  27.01.2020_true_false
//
//  Created by Marc Kevin Franke on 27.01.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include<stdio.h>

int main(){

    int number;
    printf("Enter your number, please\n");
    fflush(stdout); // очистить буфер обмена
    scanf("%d", &number);
    printf("We doubled your number: %d\n", number*2);

    int a=10;
    int b=15;
    a = (a>b)?b:a; // при выполнения условие задачи: первая позиция правда, вторая позиция ложь
    printf("%d\n", a);

    printf("%s\n", (1>0)? "true" : "false");

    return 0;
}
