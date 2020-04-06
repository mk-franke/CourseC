//
//  main.c
//  19.02.2020 Homework
//
//  Created by Marc Kevin Franke on 19.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include <stdio.h>

void checkNumberInArray(int arr[], int size, int num);
void sumEvenElementsInArray(int arr[], int size);

int main(){

    int number = 6;
    int size = 10;
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    
    checkNumberInArray(array, size, number);
    sumEvenElementsInArray(array, size);

    return 0;
}

void checkNumberInArray(int arr[], int size, int num){
    int i;
    int check = 0;
    for(i=0; i<size; i++){
        if(arr[i]==num){
            printf("The index of number %d in array is %d\n", num, i);
            check = 1;
        }
    }
    if(check==0){
    printf("The number %d is not in the array\n", num);
    }
}

void sumEvenElementsInArray(int arr[], int size){
    int i;
    int sum = 0;
    for(i=0; i<size; i++){
        if(arr[i]%2!=0){
            sum += arr[i];
        }
    }
    printf("Summary of all odd numbers in the array is %d\n", sum);
}
