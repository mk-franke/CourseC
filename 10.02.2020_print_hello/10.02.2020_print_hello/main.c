//
//  main.c
//  10.02.2020 Print Hello
//
//  Created by Marc Kevin Franke on 10.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include <stdio.h>

void printHello1(int num);
void printHello2(int num);
void printStars(int num, int row);
void printSquare1(int column, int row);
void printSquare2(int stars);
void printRectangle(int column, int row);

int main(){
    
    printHello1(7);
    printf("\n");
    printHello2(5);
    printf("\n");
    printStars(25,5);
    printf("\n");
    printSquare1(5,5);
    printf("\n");
    printSquare2(5);
    printf("\n");
    printRectangle(10,5);
    
    return 0;
}

void printHello1(int num){
    int i;
    for(i=1; i<=num; i++){
        printf("%d Hello!\n", i);
    }
}

void printHello2(int num){
    while(num!=0){
        printf("%d Hello!\n", num);
        num--;
    }
}

void printStars(int num, int row){
    int i=1, j=1;
    while(i<=num){
        if(j<row){
            printf("*");
            j++;
        } else {
            printf("*\n");
            j=1;
        }
        i++;
    }
}

void printSquare1(int column, int row){
    int i, j;
    for(j=1; j<=row; j++){
        for(i=1; i<=column; i++){
            printf("* ");
        }
        printf("\n");
    }
}

void printSquare2(int stars){
    int i, j;
    for(j=1; j<=stars; j++){
        for(i=1; i<=stars; i++){
            if(i==1 || j==1 || i==stars || j==stars){
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void printRectangle(int column, int row){
    int i, j;
    for(j=1; j<=row; j++){
        for(i=1; i<=column; i++){
            if(i==1 || j==1 || i==column || j==row){
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}
