//
//  main.c
//  24.02.2020 String
//
//  Created by Marc Kevin Franke on 24.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* sayHello(void);
char* sayHelloTo(char* name);

int main(){
    
    char name[20];
    gets(name);
//    puts(name);
    puts(sayHelloTo(name));
    
    char string[100] = "This is a string";
    printf("%s\n", string);
    char* string2 = "This is also a string";
    printf("%s\n", string2);
    
    string[5] = 'X';
    printf("%s\n", string);
    
    puts(sayHello());
    printf("%s\n", sayHello());

    return 0;
}

char* sayHello(){
    return "Hello!";
}

char* sayHelloTo(char* name){
    char welcome[256] = "Hello, ";
    if(strcmp("Kevin", name)==0){
        strcpy(name, "Master!");
    }
    return strcat(welcome, name);
}
