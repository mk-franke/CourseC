//
//  main.c
//  05.02.2020_simple_number
//
//  Created by Marc Kevin Franke on 05.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include<stdio.h>

void isTheNumberSimple(int number);

int main(){

    int number;
    printf("Input a number\n");
    fflush(stdout);
    scanf("%d", &number);

    isTheNumberSimple(number);

    return 0;
}

void isTheNumberSimple(int number){
    int i = 1;
    int d = 0;
    while(i<=number){
        if(number%i++ == 0){
            d++;
        } else
            continue;
        if(d==3) break;
    }
    printf("Number %d is %s a prime number\n", number, (d==2)? " " : "not");
}
