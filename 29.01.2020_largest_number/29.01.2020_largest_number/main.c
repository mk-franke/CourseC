//
//  main.c
//  29.01.2020_largest_number
//
//  Created by Marc Kevin Franke on 29.01.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include<stdio.h>

int greatest_number(int a, int b, int c);
void print_greatest_number(int a, int b, int c);

int main(){

    print_greatest_number(5, 12, 4);
    print_greatest_number(8, 21, 56);

    return 0;
}

void print_greatest_number(int a, int b, int c){
    printf("The greatest number of %d, %d, %d is %d\n", a, b, c, greatest_number(a, b, c));
}

int greatest_number(int a, int b, int c){
    int greatest;
    if(a>b){
        if(a>c){
            greatest = a;
        } else {
            greatest = c;
        }
    } else {
        if(b>c){
            greatest = b;
        } else {
            greatest = c;
        }
    }
    return greatest;
}

/*
int greatest_number(int a, int b, int c){
     int greatest;
     if(a>b && a>c){
         greatest = a;
     } else if (b>a && b>c){
         greatest = b;
     }
     else {
     greatest = c;
 }
 return greatest;
 }
*/
