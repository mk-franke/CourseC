//
//  main.c
//  06.02.2020_webinar2
//
//  Created by Marc Kevin Franke on 06.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include<stdio.h>

int checkCorrectState(int temp1, int temp2);
int checkCorrectStateV2(int temp1, int temp2);
void printCorrectState(int temp1, int temp2);
void example();

int main(){

    int temp1=-50;
    int temp2=150;
    printf("temp1=%d, temp2=%d %s\n", temp1, temp2, (checkCorrectState(temp1, temp2)==1)?"Correct":"Not Correct");

    temp1=20;
    temp2=110;
    printf("temp1=%d, temp2=%d %s\n", temp1, temp2, (checkCorrectState(temp1, temp2)==1)?"Correct":"Not Correct");

    temp1=-50;
    temp2=90;
    printf("temp1=%d, temp2=%d %s\n", temp1, temp2, (checkCorrectState(temp1, temp2)==1)?"Correct":"Not Correct");

    temp1=-50;
    temp2=120;
    printCorrectState(temp1, temp2);

    example();

    return 0;
}

int checkCorrectState(int temp1, int temp2){
     if((temp1<0 && temp2>100) || (temp2<0 && temp1>100)){
         return 1;
     } else {
         return 0;
     }
 }

int checkCorrectStateV2(int temp1, int temp2){
    return((temp1<0 && temp2>100) || (temp2<0 && temp1>100));
}

void printCorrectState(int temp1, int temp2){
        printf("temp1=%d, temp2=%d %s\n", temp1, temp2, (checkCorrectStateV2(temp1, temp2))?"Correct":"Not Correct");
}

void example(){
    int a = 5;
    int b = 10;
    printf("%d\n", a<b);
    printf("%d\n", a<b<5);
    if(1) {
        printf("true");
    }
}
