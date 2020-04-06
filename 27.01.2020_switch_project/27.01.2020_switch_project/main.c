//
//  main.c
//  27.01.2020_switch_project
//
//  Created by Marc Kevin Franke on 27.01.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include<stdio.h>

void fan(int mode);

int main(){

    fan(3);
    
    return 0;
}

void fan(int mode){
    switch(mode){
    case 0:
        printf("Power is off\n");
        break;
    case 1:
        printf("Low mode\n");
        break;
    case 2:
        printf("Medium mode\n");
        break;
    case 3:
        printf("High mode\n");
        break;
    case 4:
        printf("Wrong mode\n");
        break;
    }
}
