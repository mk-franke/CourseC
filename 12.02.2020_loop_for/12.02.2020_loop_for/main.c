//
//  main.c
//  12.02.2020 Loop For
//
//  Created by Marc Kevin Franke on 12.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include <stdio.h>

void printEvenNumber1(void);
void printEvenNumber2(int num);

int main(){
    
    printEvenNumber1();
    printEvenNumber2(13);
    
    int a, b, i;
    for(i=0, a=0, b=10; i<11; i++){
        a++;
        b++;
    }
    printf("a=%d, b=%d\n", a, b);

    return 0;
}

void printEvenNumber1(void){
    int i;
    for(i=20; i>0; i=i-2){
        printf("%d\n", i);
    }
}

void printEvenNumber2(int num){
    if(num%2!=0)
    num=num-1;
        for(num; num>0; num=num-2){
            printf("%d\n", num);
        }
}
