/*
Using gregorian leap-year rules
year % 400 == 0 → return true.
year % 100 == 0 → return false.
year % 4 == 0 → return true.
*/
#include<stdio.h>

int main(){
    int year;
    printf("Enter the year you want to check: ");
    scanf("%d",&year);

    if(year%400 == 0){
        printf("It is a leap yearrr!! enjoy extra dayyy");
    }
    else if(year%100 == 0){
        printf("Not a leap year");

    }
    else if(year%4 == 0){
        printf("It is a leap yearrr!! enjoy extra dayyy");
    }
    else
         printf("Not a leap year");
    return 0;
}


