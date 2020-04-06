//
//  main.c
//  12.02.2020 Arrays 2
//
//  Created by Marc Kevin Franke on 12.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include <stdio.h>

void pow2(int num);
void pow2Array(int arr[]);

int main(){
    
    int num = 10;
    printf("%p\n", &num); // адрес хранения числа в памяти
    printf("Value in main before ^2 is %d\n", num);
    pow2(num);
    printf("Value in main after ^2 is %d\n", num);
    
    printf("\n");
    
    int array[] = {10,20};
    printf("%p\n", array);
    printf("%p\n", &array[0]);
    printf("%p\n", &array[1]);
    printf("Num in array before ^2Array is %d\n", array[0]);
    pow2Array(array);
    printf("Num in array after ^2Array is %d\n", array[0]);
    
    return 0;
}

void pow2(int num){
    num = num*num;
    printf("Value in ^2 is %d\n", num);
}

void pow2Array(int arr[]){
    arr[0] = arr[0]*arr[0];
    printf("Value in ^2Array is %d\n", arr[0]);
}
