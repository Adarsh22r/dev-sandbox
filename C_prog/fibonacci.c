#include <stdio.h>
void main(){
    int n,a,b,result,i;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    a = 0;
    b = 1;
    for(i=0;i<=n;i++){
        printf(" %d",a);
        result = a+b;
        a=b;
        b=result;
    }
}