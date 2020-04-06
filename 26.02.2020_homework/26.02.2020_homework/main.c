//
//  main.c
//  26.02.2020_homework
//
//  Created by Marc Kevin Franke on 26.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include <stdio.h>

int countDigits(int num);
void convertNumberIntoArray(int num);
void printArray(int arr[], int size);

int main(){
    
    int number = 84746570;
    convertNumberIntoArray(number);
    
    return 0;
}

int countDigits(int num){
    int size = 0;
    while(num>0){
        num /= 10;
        size++;
    }
    return size;
}

void convertNumberIntoArray(int num){
    int i = countDigits(num)-1;
    int size = countDigits(num);
    int arr[size];
    while(num>0){
        arr[i] = num%10;
        num /= 10;
        i--;
    }
    printArray(arr, size);
}

void printArray (int arr[], int size){
    printf("{");
    int i;
    for(i=0; i<size; i++){
        if(i<size-1){
            printf("%d, ", arr[i]);
        } else {
            printf("%d", arr[i]);
        }
    }
    printf("}");
}
/*

int countDigits(int num){
    int i;
    for(i=0; num>0; i++){
        num /= 10;
    }
    return i;
}
*/
