//
//  main.c
//  20.02.2020_webinar
//
//  Created by Marc Kevin Franke on 20.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int day;
    int month;
    int year;
} DATE;

DATE createDate(int day, int month, int year);
void printDate(DATE date);

int main(){
    
    DATE d1 = createDate(10, 06, 2016);
    printDate(d1);

    return 0;
}

DATE createDate(int day, int month, int year){
    DATE date;
    date.day=day;
    date.month=month;
    date.year=year;
    return date;
}

void printDate(DATE date){
    printf("%d/%d/%d\n", date.day, date.month, date.year);
}
