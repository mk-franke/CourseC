//
//  main.c
//  24.02.2020 Binary Search
//
//  Created by Marc Kevin Franke on 24.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include <stdio.h>

int binarySearch(int arr[], int size, int num);

int main(){
    
    int array[] = {1,4,6,9,10,12,14,18,19};
    int size = sizeof array/sizeof array[0];
    int res = binarySearch(array, size, 14);
    (res<0) ? printf("No such number\n"):printf("Index number in array is %d\n", res);

    return 0;
}

int binarySearch(int arr[], int size, int num){
    int left, right, middle;
    for(left=0, right=size-1; left<=right; ){
        middle = (left + right)/2;
        if(arr[middle]==num){
            return middle;
        }
        if(arr[middle]>num){
            right = middle-1;
        } else {
            left = middle+1;
        }
    }
    return -1;
}
