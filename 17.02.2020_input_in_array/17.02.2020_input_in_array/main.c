//
//  main.c
//  17.02.2020 Input In Array
//
//  Created by Marc Kevin Franke on 17.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include <stdio.h>

void fillArray(int size);
void printArray1(int arr[], int size);
int findMaxValue(int arr[], int size);
void printArray2(int arr[], int size);
void changeElements(int arr[], int size);
void replaceChar(char arr[], int size);

int main(){

    fillArray(5);
    printf("\n");
    int array1[] = {34, 56, 189, 234, 76};
    printf("Max in array is %d\n", findMaxValue(array1,5));
    printf("\n");
    printArray2(array1,5);
    printf("\n");
    changeElements(array1, 5);
    printf("\n");
    char privet[] = "Privet MedvEd";
    replaceChar(privet, 13);
    printf("\n");
    
    return 0;
}

void fillArray(int size){
    int arr[size];
    int i;
    for(i=0; i<size; i++){
        printf("Enter value no. %d: ", i);
        fflush(stdout);
        scanf("%d", &arr[i]);
    }
    printf("\nYour array is: ");
    printArray1(arr, size);
}

void printArray1(int arr[], int size){
    int i;
    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
}

int findMaxValue(int arr[], int size){
    int i;
    int max = arr[0];
    for(i=0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

void printArray2(int arr[], int size){
    printf("Your array is: {");
    int i;
    for(i=0; i<size; i++){
        printf("%d", arr[i]);
        if(i<size-1){
            printf(", ");
        }
    }
    printf("}\n");
}

void changeElements(int arr[], int size){
    int i;
    for(i=0; i<size; i++){
        if(arr[i]==34){
            arr[i]=0;
        }
        printf("%d ", arr[i]);
    }
}

void replaceChar(char chars[], int size){
    int i;
    for(i=0; i<size; i++){
        if(chars[i] == 'e' || chars[i] == 'E'){
            chars[i] = ' ';
        }
        printf("%c", chars[i]);
    }
}
