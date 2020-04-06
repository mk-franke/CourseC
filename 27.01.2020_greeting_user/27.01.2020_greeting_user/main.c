//
//  main.c
//  27.01.2020_greeting_user
//
//  Created by Marc Kevin Franke on 27.01.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include<stdio.h>

int main(){

    char answer;
    printf("Do you want me to salute you? (y/n)\n");
    scanf("%c", &answer);
    if(answer=='y'){
        printf("Hello, user!\n");
    } else if (answer=='n'){
        printf("I didn't want to salute you anyway\n");
    } else {
        printf("I can't understand your input!\n");
    }

    return 0;
}
