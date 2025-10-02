#include<stdio.h>
void main(){
    int i,j,n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    //consider a marix where the row is n and columns are 2n-1, use basic looping of 2-D array.
    for(i=1;i<=n;i++)
    { 
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n-(i-1) && j<=n+(i-1)) //print stars between these columns n-(i-1) to n+(i-1)             
            {
                printf("*");
            }
            else //otherwise print spaces if not in the range
                printf(" ");
        }
        printf("\n");
    }
}