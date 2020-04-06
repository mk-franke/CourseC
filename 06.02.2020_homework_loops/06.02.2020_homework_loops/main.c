//
//  main.c
//  06.02.2020_homework_loops
//
//  Created by Marc Kevin Franke on 06.02.2020.
//  Copyright © 2020 Marc Kevin Franke. All rights reserved.
//

#include<stdio.h>
 
int sumOfNumbers(int number);
float arithmeticalMean(int number, int sum);
void printArithmeticalMean(int number, int sum);

int getCountsOfDigits(long int number);
void printCountsOfDigits(long int number);
 
int main(){
   
   int numb1;
   int i;
   int sum1 = 0;
   
   printf("Enter a number: \n");
   scanf("%d", &numb1);
   
   for (i=1; i<=numb1; i++){
       sum1 += i;
   }
   printf("The summary of number from 1 to %d is %d\n", numb1, sum1);
   printf("The arithmetical mean of the summary of numbers (from 1 to %d) is %.2f\n", numb1, (float)sum1/numb1);
   
   float res = (float)sum1/numb1;
   printf("The arithmetical mean of the summary of numbers (from 1 to %d) is %.2f\n", numb1, res);
   
   printArithmeticalMean(numb1, sum1);
   
   float arithMean;
   int summary;
   summary = (numb1*(numb1+1)/2);
   arithMean = (float)(numb1*(numb1+1)/2)/numb1;
   printf("%d\n", summary);
   printf("%.2f\n", arithMean);
    
    printf("%d\n", getCountsOfDigits(numb1));
    printCountsOfDigits(numb1);
   
   return 0;
}
 
int sumOfNumbers(int number){
   int i;
   int sum = 0;
   for (i=1; i<=number; i++){
       sum += i;
   }
   return sum;
}
 
float arithmeticalMean(int number, int sum){
   return (float)sum/number;
}
 
void printArithmeticalMean(int number, int sum){
   printf("The summary of number from 1 to %d is %d\n", number, sum);
   printf("The arithmetical mean of the summary of numbers (from 1 to %d) is %.2f\n", number, arithmeticalMean(number, sum));
}

int getCountsOfDigits(long int number){
    int i = (number==0) ? 1 : 0;
        while(number!=0){
            i++;
            number /= 10;
        }
        return i;
}
    
void printCountsOfDigits(long int number){
    printf("Quantity of digits is %d\n", getCountsOfDigits(number));
}

/*
int countNumber(int number){
    int res = 0;
    if(number==0) return 1;
    do{
        printf("Result: %d", res);
        number = number/10;
        res++;
    } while(number!=0);
    return res;
}
*/
