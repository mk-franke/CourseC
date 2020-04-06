//
//  main.c
//  19.02.2020 Sort
//
//  Created by Marc Kevin Franke on 19.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include <stdio.h>
#include "header.h"

#define WIDTH 80
#define LENGTH (WIDTH + 10)

#define boolean int
#define true 1
#define false 0

const float numberPI = 3.14;
void sayHello(void);

void printArray(int arr[], int size);
void bubbleSortMax(int arr[], int size);
void bubbleSortMin(int arr[], int size);
void shakerSort(int arr[], int size);
void insertSort(int arr[], int size);
void reverseArray(int arr[], int size);

int main(){

    sayHello();
    int a = WIDTH;
    printf("%d\n", a);
    int b = LENGTH;
    printf("%d\n", b);
    
    printf("\n");
    
    int array1[] = {3,7,0,2,1,9,8,12};
    printArray(array1, 8);
    bubbleSortMax(array1, 8);
    printArray(array1, 8);
    bubbleSortMin(array1, 8);
    printArray(array1, 8);
    
    printf("\n");
    
    int array2[] = {3,7,0,2,1,9,8,12};
    printArray(array2, 8);
    shakerSort(array2, 8);
    printArray(array2, 8);
    
    printf("\n");
    
    int array3[] = {3,7,0,2,1,9,8,12};
    printArray(array3, 8);
    insertSort(array3, 8);
    printArray(array3, 8);
    
    printf("\n");
    
    int array4[] = {5,8,7,3,1};
    printArray(array4, 5);
    reverseArray(array4, 5);
    
    return 0;
}

void printArray(int arr[], int size){
    printf("{");
    int i;
    for(i=0; i<size; i++){
        printf("%d", arr[i]);
        if(i<size-1){
            printf(", ");
        }
    }
    printf("}\n");
}

void bubbleSortMax(int arr[], int size){
    int i,j;
    for(i=0; i<size-1; i++){
        for(j=0; j<size-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void bubbleSortMin(int arr[], int size){
    int i,j;
    for(i=0; i<size-1; i++){
        for(j=0; j<size-1-i; j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void shakerSort(int arr[], int size){
    int left = 0;
    int right = size-1;
    int flag = 1;
    while(left < right && flag > 0){
        flag = 0;
        for(int i=left; i<right; i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                flag = 1;
            }
        }
        right --;
        for(int i=right; i>left; i--){
            if(arr[i-1]>arr[i]){
                int temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = temp;
                flag = 1;
            }
        }
        left ++;
    }
}

void insertSort(int arr[], int size){
    int insertTemp, index, i;
    for(i=1; i<size; i++){
        insertTemp = arr[i];
        index = i-1;
        while(index>=0 && arr[index]>insertTemp){
            arr[index+1] = arr[index];
            index = index-1;
        }
        arr[index+1] = insertTemp;
    }
}

void reverseArray(int arr[], int size){
    int reverseArray[size];
    int i;
    for(i=0; i<size; i++){
        reverseArray[size-1-i] = arr[i];
    }
    printArray(reverseArray, size);
}
