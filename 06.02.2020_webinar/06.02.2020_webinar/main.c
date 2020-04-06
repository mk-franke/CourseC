//
//  main.c
//  06.02.2020_webinar
//
//  Created by Marc Kevin Franke on 06.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include<stdio.h>

void example();

void printSum2Numbers (int a, int b);
int sum2Numbers (int a, int b);
int printSum2NumbersV2 (int a, int b);


int main(void){

    int a=6, b=9;
    printSum2Numbers (a,b);
    printSum2Numbers (a, 20+sum2Numbers(a,b));

    example();

    printSum2NumbersV2 (a*2,b*2);

    int c=printf("hello");
    printf("\nc=%d", c);

    return 0;
}

void example(){
    printSum2Numbers (1,1);
    printSum2Numbers (2,2);
    printSum2Numbers (3,2);
}

void printSum2Numbers (int a, int b){
    printf("%d\n", sum2Numbers(a,b));
}

int sum2Numbers (int a, int b){
    return a+b;
}

int printSum2NumbersV2 (int a, int b){
    printf("%d\n", sum2Numbers(a,b));
    return sum2Numbers(a,b);
}
