#include<stdio.h>

int main(){
    int power = 1, expo, exponent, base;
    double power1 = 1.0;

    printf("=================Enter the Base: =================\n");
    scanf("%d",&base);
    printf("=================Enter the power: =================\n");
    scanf("%d",&expo);
    exponent = expo;

    if(exponent > 0){

        while(exponent != 0){
            power = power*base;
            exponent-- ;
        }
        printf("The %d power of %d is:%d",base,expo,power);
    }
    else if(exponent < 0)
    {
        exponent = expo;

        while(exponent != 0){
        power1 = power1*(1.0/base);
        exponent++;
        }

        printf("The %d power of %d is: %.10f",base,expo,power1);
    }
    return 0;
} 
