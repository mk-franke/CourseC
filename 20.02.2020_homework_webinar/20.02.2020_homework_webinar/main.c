//
//  main.c
//  20.02.2020 Homework Webinar
//
//  Created by Marc Kevin Franke on 20.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include <stdio.h>

int min(int arr[], int size);
int max(int arr[], int size);
int sumWithoutMinMax(int arr[], int size);
void printArray(int arr[], int size);
void moveInArray(int arr[], int size);
void bubbleSort(int arr[], int size);

int main(){
    
    int arr[] = {13, 87, 45, 26, 35, 68, 25, 34, 29, 42};
    int size = sizeof arr/ sizeof arr[0];
    printf("Min is %d\n", min(arr, size));
    printf("Max is %d\n", max(arr, size));
    printf("Sum without min&max is %d\n", sumWithoutMinMax(arr, size));
    
    printArray(arr, size);
    moveInArray(arr, size);
    
    bubbleSort(arr, size);
    printArray(arr, size);
    
    return 0;
}

int min(int arr[], int size){
    int min = arr[0];
    int i;
    for(i=1; i<size; i++){
        min = min>arr[i] ? arr[i]:min;
    }
    return min;
}
    
int max(int arr[], int size){
    int max = arr[0];
    int i;
    for(i=1; i<size; i++){
        max = max<arr[i] ? arr[i]:max;
    }
    return max;
}
       
int sumWithoutMinMax(int arr[], int size){
    int iMin = min(arr,size);
    int iMax = max(arr, size);
    int arrSize = size;
    float sum = 0;
    int i;
    for(i=0; i<size; i++){
        if(arr[i]!=iMin && arr[i]!=iMax){
            sum += arr[i];
        } else {
            arrSize--;
        }
    }
    return sum;
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

void moveInArray(int arr[], int size){
    int i;
    for(i=0; i<size-1; i+=2){
        int temp = arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    printArray(arr, size);
}

void bubbleSort(int arr[], int size){
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
