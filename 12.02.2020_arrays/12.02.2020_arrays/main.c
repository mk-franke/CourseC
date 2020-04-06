//
//  main.c
//  12.02.2020 Arrays
//
//  Created by Marc Kevin Franke on 12.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include <stdio.h>

void printArray(int arr[], int size);

int main(){
    
    int size = 5;
    int array[size]; // [0][1][2][3][4] массив начинается с нуля
    array[0] = 11;
    array[1] = 22;
    array[2] = 33;
//    array[3] = 44; //без инициализации значения в месте массива, кладет мусор в это место
//    array[4] = 55;
    
    int array1[] = {1,3,5,7,9};
    int array2[10] = {2,4,6}; //проинициализированно 10 мест в массиве, прописаны 3 => заполняет пустые места массива 0
    int array3[5] = {}; //заполнение пустых мест 0
    
    printArray(array, size);
    printf("\n");
    printArray(array1, 7); //выходя за размер массива, прописывает мусор в новых местах
    printf("\n");
    printArray(array2, 10);
    printf("\n");
    printArray(array3, 5);
    printf("\n");
    
    return 0;
}

void printArray(int arr[], int size){
    int i;
    for(i=0; i<size; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}
