//
//  main.c
//  13.02.2020 Webinar
//
//  Created by Marc Kevin Franke on 13.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include <stdio.h>

void test(int a[], int size);

int main(){
    
    int a[10];
    printf("size of array %li\n", sizeof a);
    printf("size of one element %li\n", sizeof a[0]);
    
    int size = sizeof a/sizeof a[0]; //количество элементов в массиве
    printf("size %li\n", sizeof a/sizeof a[0]);
    
    int i=0;
    for(i=0; i<size; i++){
        a[i]=i;
        printf("%d  ", a[i]);
    }
    
    printf("\n");
    
    for(i=0; i<size; i++){
        if(a[i]%2 == 0){
            printf("%d  ", a[i]);
        }
    }
    
    printf("\n");
    
    for(i=0; i<size; i++){
        if(a[i] == 10){
            printf("%d  ", i);
        }
    }
    
    printf("\n");
    test(a, size);
    printf("\n");
    
    for(i=0; i<size; i++){
        printf("%d  ", a[i]);
    }
    
    return 0;
}

void test(int a[], int size){
//    int b[4];
//    printf("size of array %li\n", sizeof a);
//    printf("size of one element %li\n", sizeof a[0]);
//    int size = sizeof a/sizeof a[0];
//    printf("size %li\n", sizeof a/sizeof a[0]);
    a[4]=10;
}
