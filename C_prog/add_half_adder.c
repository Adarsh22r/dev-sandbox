#include<stdio.h>
void main(){
    int x,y,sum,carry;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);

    while(carry!=0){
        sum = x^y;
        carry = (x&y)<<1;
        x = sum;
        y = carry;
    }
    printf("the sum of two numbers is:%d",x);
}