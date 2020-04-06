//
//  main.c
//  08.02.2020_homework_webinar
//
//  Created by Marc Kevin Franke on 08.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include <stdio.h>

void multiplicity1(int a, int b, int c);
void multiplicity2(int a, int b, int c);
void multiplicity3(int a, int b, int c);

void factorial1(int number);
void factorial2(int number);
void factorial3(int number);

int factorialWithoutLoops(int number);

int main(){
    
    multiplicity1(2, 10, 2);
    printf("\n");
    multiplicity2(10, 20, 2);
    printf("\n");
    multiplicity3(20, 30, 2);
    
    int numb;

    printf("Enter a number \n");
    fflush(stdout);
    scanf("%d", &numb);
    
    factorial1(numb);
    factorial2(numb);
    factorial3(numb);

    printf("%d! = %d\n",numb, factorialWithoutLoops(numb));
    
    return 0;
}

void multiplicity1(int a, int b, int c){
    while(a<=b){
        if(a%c == 0){
        printf("%d\n", a);
        }
        a++;
    }
}

void multiplicity2(int a, int b, int c){
    int i;
    int sum = 0;
    for(i=a; i<=b; i++){
        sum = i+1;
        if(i%c == 0){
        printf("%d\n", i);
        }
    }
}

void multiplicity3(int a, int b, int c){
    int i = a-1;
    int sum = 0;
    do {
        sum = i+1;
        i++;
        if(i%c == 0){
        printf("%d\n", i);
        }
    } while(i<=b);
}

void factorial1(int number){
    int i;
    int res = 1;
    for(i=1; i<=number; i++){
        res *= i;
    }
    printf("Factorial of %d is %d\n", number, res);
}

void factorial2(int number){
    int i = 1;
    int res = 1;
    while(i<=number){
        res *= i;
        i++;
    }
    printf("Factorial of %d is %d\n", number, res);
}

void factorial3(int number){
    int i = 1;
    int res = 1;
    do {
        res *= i;
        i++;
    } while (i<=number);
    printf("Factorial of %d is %d\n", number, res);
}

int factorialWithoutLoops(int number){
    int res = 1;
    if(number != 1){
        res = number*factorialWithoutLoops(number-1);
    }
    return res;
}
