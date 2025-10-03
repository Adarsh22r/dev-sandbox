 /*to print a triangular pattern
1
12
123
1234
12345
*/
#include<stdio.h>
void main(){
    int i,j,n;
    printf("Enter the number of rows");
    scanf("%d",&n);
   
    for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(j<=i)
                {
                    printf("%d",j);//can use other symbols like *
                }
            }
            printf("\n");
        }
}