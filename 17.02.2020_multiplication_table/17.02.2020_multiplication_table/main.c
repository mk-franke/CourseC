//
//  main.c
//  17.02.2020 Multiplication Table
//
//  Created by Marc Kevin Franke on 17.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void printMultiplicationTable(void);
void printMultiplicationTableArray(void);

int main(){

    printMultiplicationTable();
    printf("\n");
    printMultiplicationTableArray();
    printf("\n");
    
    return 0;
}

void printMultiplicationTable(){
    int i, j;
    for(i=1; i<=10; i++){
        for(j=1; j<=10; j++){
            printf("%d\t", i*j);
        }
        printf("\n");
    }
}

void printMultiplicationTableArray(){
    int rows = 10, columns = 10;
    int table[rows][columns];
    int i, j;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            table[i][j] = (i+1)*(j+1);
        }
    }
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }
}
