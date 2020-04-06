//
//  main.c
//  27.01.2020_conditions
//
//  Created by Marc Kevin Franke on 27.01.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include<stdio.h>

int main(){

    int a;
    printf("Enter Number\n");
    fflush(stdout);
    scanf("%d", &a);
    if(a>5){
        printf("%d > 5\n", a);
    } else if (a<5){
        printf("%d < 5\n", a);
    } else {
        printf("%d = 5\n", a);
    }

    return 0;
}
