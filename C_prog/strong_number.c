/*
145 
1!+4!+5!
*/
#include<stdio.h>
void main(){
    int n, q ,fact=1,i,rem,res = 0;
    printf("enter the number: ");
    scanf("%d",&n);
    
    q = n;
    while(q!=0){
        rem = q%10;
        for(i=1;i<=rem;i++){
            fact = fact*i;
        }
        res = res +fact;
        fact = 1;
        q = q/10;
    }
    if(res == n){
        printf("%d is a Strong number.",n);
    }
    else{
        printf("NO!!! %d is not Strong number",n);
    }
}