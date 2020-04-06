//
//  main.c
//  20.01.2020_void_function
//
//  Created by Marc Kevin Franke on 20.01.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include <stdio.h>

void f1();
void f2();
void f3();

int main(){
    f1();
    return 0;
}

 void f1(){
     printf("I'm function 1\n");
     f2();
     return;
 }

 void f2(){
     printf("I'm function 2\n");
     f3();
     return;
 }

 void f3(){
     printf("I'm function 3");
     return;
 }
