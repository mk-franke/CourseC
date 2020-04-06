//
//  main.c
//  03.02.2020_autobahn
//
//  Created by Marc Kevin Franke on 03.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include<stdio.h>

void calcFine(int speedFine, int lineFine);
void checkAll(int line, float weight, int axis, float currentSpeed);
int getMaxSpeed(int line);
int getTypeVehicle(float weight, int axis);
int checkLine(int line, int typeVehicle);
int checkSpeed(int maxSpeed, float currentSpeed);

int main(){

    float currentSpeed = 150;
    float weight = 3000;
    int axis = 2;
    int line = 3;

    checkAll(line, weight, axis, currentSpeed);

    return 0;
}

void calcFine(int speedFine, int lineFine){
    if(speedFine > 0 || lineFine > 0){
        printf("Dear driver\n");
        printf("Your speed fine is: %d\n", speedFine);
        printf("Your line fine is: %d\n", lineFine);
        printf("Your total fine is: %d\n", speedFine + lineFine);
        printf("Have a nice day!\n");
    } else {
        printf("Have a nice day!\n");
    }
}

void checkAll(int line, float weight, int axis, float currentSpeed){
    int maxSpeedLine = getMaxSpeed(line);
    int typeVehicle = getTypeVehicle(weight, axis);
    int lineFine = checkLine(line, typeVehicle);
    int speedFine = checkSpeed(maxSpeedLine, currentSpeed);
    calcFine(speedFine, lineFine);
}

int getMaxSpeed(int line){
    switch(line){
    case 1:
        return 130;
        break;
    case 2:
        return 110;
        break;
    case 3:
        return 90;
        break;
    default:
        printf("Wrong line\n");
        return -1;
    }
}

int getTypeVehicle(float weight, int axis){
    if(weight <= 3500){
        return 1;
    } if(weight > 3500 && axis > 2){
        return 2;
    }
    return 3;
}

int checkLine(int line, int typeVehicle){
    if(line < 3 && typeVehicle == 2){
        return 150;
    } if(line == 1 && typeVehicle == 3){
        return 100;
    }
    return 0;
}

int checkSpeed(int maxSpeed, float currentSpeed){
    float res = currentSpeed - maxSpeed;
    if(res < 10){
        return 0;
    } if(res >= 10 && res < 20){
        return 30;
    } if(res >= 20 && res < 30){
        return 100;
    } if(res >= 30 && res < 50){
        return 200;
    } if(res >= 50){
        printf("You are a pedestrian now\n");
        return 500;
    }
    return 0;
}
