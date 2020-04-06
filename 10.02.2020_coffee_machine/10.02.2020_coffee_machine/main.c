//
//  main.c
//  10.02.2020_coffee_machine
//
//  Created by Marc Kevin Franke on 10.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include <stdio.h>

void coffeeMachine(int choice);
void latte(void);
void cappuccino(void);
void espresso(void);
void americano(void);
void milk(void);
void addCoffee(int quantity);
void addWater(int quantity);
void addMilk(int quantity);

int main(){
    
    int number;

    printf("Please, choose your drink!\n");
    printf("\t 1 Latte\n");
    printf("\t 2 Cappuccino\n");
    printf("\t 3 Espresso\n");
    printf("\t 4 Americano\n");
    printf("\t 5 Milk\n");
    
    scanf("%d", &number);
    
    coffeeMachine(number);
    
    return 0;
}

void coffeeMachine(int choice){
    switch(choice){
        case 1:
            latte();
            break;
        case 2:
            cappuccino();
            break;
        case 3:
            espresso();
            break;
        case 4:
            americano();
            break;
        case 5:
            milk();
            break;
        default:
            printf("Error: no such drink!\n");
    }
}

void latte(void){
    printf("Your latte is preparing\n");
    addCoffee(5);
    addWater(50);
    addMilk(200);
    printf("Your latte is ready!\n");
}

void cappuccino(void){
    printf("Your cappuccino is preparing\n");
    addCoffee(8);
    addWater(50);
    addMilk(100);
    printf("Your cappuccino is ready!\n");
}

void espresso(void){
    printf("Your espresso is preparing\n");
    addCoffee(8);
    addWater(50);
    printf("Your espresso is ready!\n");
}

void americano(void){
    printf("Your americano is preparing\n");
    addCoffee(8);
    addWater(150);
    printf("Your americano is ready!\n");
}

void milk(void){
    printf("Your milk is preparing\n");
    addMilk(250);
    printf("Your milk is ready!\n");
}

void addCoffee(int quantity){
    printf("Adding %d gr of coffee\n", quantity);
}

void addWater(int quantity){
    printf("Adding %d ml of water\n", quantity);
}

void addMilk(int quantity){
    printf("Adding %d ml of milk\n", quantity);
}
