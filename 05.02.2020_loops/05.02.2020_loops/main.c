//
//  main.c
//  05.02.2020_loops
//
//  Created by Marc Kevin Franke on 05.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include<stdio.h>

int main(){
/*
    int a = 10;
    int b = 20;
    while(a<b){
        printf("%d\n", a);
        a++;
//        printf("%d\n", a++);
//        printf("%d\n", ++a);
    }
*/
    int c = 10;
    int d = 20;
    int countEvent = 0;
    while(c<d){
        if(c%2==0)
            countEvent++;
        c++;
    }
    printf("They are %d even number in sequence\n", countEvent);

    int input;
    do{
        printf("Enter a divider for 100 (remember, that you can't divide by 0)\n");
        fflush(stdout);
        scanf("%d", &input);
    } while(input==0);
    printf("100/%d = %d\n", input, 100/input);
    printf("And the rest will be %d\n", 100%input);

    return 0;
}
