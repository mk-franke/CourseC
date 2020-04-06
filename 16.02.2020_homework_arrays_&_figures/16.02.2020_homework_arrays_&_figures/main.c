//
//  main.c
//  16.02.2020 Homework Arrays & Figures
//
//  Created by Marc Kevin Franke on 16.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include <stdio.h>

void printArray(int arr[], int size);
void multiplyTwoArrayElements(int arr[], int size);
void summaryOfAllArrayElements(int arr[], int size);

void printRectangle(int column, int row);
void printHalfPyramid(int row);
void printInvertedHalfPyramid(int row);
void printPyramid(int row);
void printParallelogram(int row);
void printCross(int column, int row);

int main(){
    
    int size = 3;
    int array1[size];
    array1[0] = 7;
    array1[1] = 8;
    array1[2] = 9;
    printArray(array1, size);
    printf("\n");
    int array2[3] = {11,22,33};
    multiplyTwoArrayElements(array2, 3);
    printf("\n");
    int array3[] = {55, 66, 77};
    summaryOfAllArrayElements(array3, 3);
    printf("\n");
    
    printRectangle(10,5);
    printf("\n");
    printHalfPyramid(5);
    printf("\n");
    printInvertedHalfPyramid(5);
    printf("\n");
    printPyramid(5);
    printf("\n");
    printParallelogram(5);
    printf("\n");
    printCross(7,7);

    return 0;
}

void printArray(int arr[], int size){
    int i;
    for(i=0; i<size; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

void multiplyTwoArrayElements(int arr[], int size){
    int i;
    for(i=0; i<size; i++){
        printf("%d multiply two is ", arr[0]);
        arr[0] = arr[0]*2;
        printf("%d\n", arr[0]);
    }
}

void summaryOfAllArrayElements(int arr[], int size){
    int i;
    int sum = 0;
    for(i=0; i<size; i++){
        sum += arr[i];
    }
    printf("Summary of all elements in array is %d\n", sum);
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

void printHalfPyramid(int row){
    int i, j;
    for(j=1; j<=row; j++){
        for(i=1; i<=j; i++){
            printf("* ");
        }
        printf("\n");
    }
}

void printInvertedHalfPyramid(int row){
    int i, j;
    for(j=row; j>=1; j--){
        for(i=1; i<=j; i++){
            printf("* ");
        }
        printf("\n");
    }
}

void printPyramid(int row){
    int i, j, k;
    for(j=1; j<=row; j++){
        for(i=1; i<=row-j; i++){
            printf("  ");
        }
        for(k=0; k!=(2*j-1); k++){
            printf("* ");
        }
        printf("\n");
    }
}

void printParallelogram(int row){
    int i, j, k;
    for(j=1; j<=row; j++){
        for(i=1; i<=row-j; i++){
            printf("  ");
        }
        for(k=0; k!=(2*row-1); k++){
            printf("* ");
        }
        printf("\n");
    }
}

void printCross(int column, int row){
    int i, j;
    for(j=1; j<=row; j++){
        for(i=1; i<=column; i++){
            if(i==4 || j==4){
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void printCross2(int row){
    int i, j;
    for(j=1; j<=row; j++){
        for(i=1; i<=j; i++){
            if(i==4 || j==4){
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}
