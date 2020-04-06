//
//  main.c
//  02.02.2020_homework2
//
//  Created by Marc Kevin Franke on 02.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include<stdio.h>

void range(int x);

int main(){

    int num1;

    printf("Enter a whole number: \n");
    scanf("%d", &num1);

    range(num1);

    return 0;
}

void range(int x){
//    (x >= 0 && x <= 100) ? printf("Inside the range\n") : printf("Outside the range\n");
    if (x >= 0 && x <= 100){
        printf("The number is inside the given range\n");
    } else {
        printf("The number is not inside the given range\n");
    }
}
