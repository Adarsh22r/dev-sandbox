#include<stdio.h>
void main(){
    int n,rem,result=0,q;
    printf("Enter the number: ");
    scanf("%d",&n);

    q = n;//2332 after 1 iteration q=233

    while(q!=0)
    {
        rem = q%10;//2332%10 = rem = 2, rem = 3,rem = 3,rem =2
        result = result*10 +rem; // res=2,res = 23,res = 233,res = 2332
        q = q/10; //q=233,q=23,q=2,0(exit while)
    }

    if(result == n)
        printf("its a palindrome");
    else
        printf("No! its not a palindrome");
}