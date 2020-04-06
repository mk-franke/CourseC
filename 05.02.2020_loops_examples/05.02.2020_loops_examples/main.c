//
//  main.c
//  05.02.2020_loops_examples
//
//  Created by Marc Kevin Franke on 05.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include<stdio.h>

int sumNumber1(int number);
void sumNumber2(int number);
void gagarin1(int number);
void gagarin2(int number);
int sumDigits(int number);

int main(){

    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("Sum is %d\n", sumNumber1(num));

    sumNumber2(5);

    int i;
    for(i=100; i>0; i/=2){
        printf("i is %d\n", i);
    }

    gagarin1(5);
    gagarin2(5);

    printf("%d\n", sumDigits(8756));

    return 0;
}

int sumNumber1(int number){
    int i = 1;
    int res = 0;
    while(i<=number){
        res = res + i;
        i++;
    }
    return res;
}

void sumNumber2(int number){
    int i;
    int res = 0;
    for(i=1; i<=number; i++){
        res = res + i;
        printf("Step %d sum is %d\n", i, res);
    }
}

void gagarin1(int number){
    int i;
    for(i=1; i<=number; i++){
        printf("%d\n", i);
    }
    printf("Let's go!\n");
}

void gagarin2(int number){
    while(number!=0){
        printf("%d\n", number);
        number--;
    }
    printf("Let's go!\n");
}

int sumDigits(int number){
    int sum = 0;
    while(number!=0){
        sum = sum + number%10;
        number = number/10;
    }
    return sum;
}
