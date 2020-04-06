//
//  main.c
//  20.01.2020_my_first_project
//
//  Created by Marc Kevin Franke on 20.01.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include<stdio.h>

int main(){
    printf("Hello World!\n");
    printf("My name\t is Kevin\n");
    printf("Hello\n");

    int a = 50; // 4 bytes -2.147.000.000 ... 2.147.000.000
    int max = 2147483648;
    printf("%d\n", max+1);

    float p = 3.14, res;
    printf("%.2f\n", p);
    printf("%f\n", 4.567);
    printf("%d %s %d %s\n", 3, "dogs", 2, "cats" );

    printf("a is %5d\n", a);

    char c = 120;
    char c1 = 'a';
    printf("%c, %c\n", c, c1);

    return 0;
}
