/*
perfect number-->positive integer that equals the sum of its proper divisor

*/
#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter the number :");
    scanf("%d",&n);

    for(int i=1;i<=n/2;i++){
        if (n % i == 0)
            sum += i;
    }
    
    if (sum == n && n != 0)
        printf("Yess! %d is a pErFeCt NuMbEr",n);
    else
        printf("not a perfect number. ");
    
    return 0;
}
