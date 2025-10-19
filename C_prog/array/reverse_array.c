#include<stdio.h>
#define N 5
int main(){
    int a[N],i;
    printf("Enter the elements of array :\n");

    for(i = 0; i<N;i++){
        printf("Enter the %d element: ",i);
        scanf("%d",&a[i]);
    }
    
    printf("----------REVERSE ORDER ------------\n");
    for(i = N-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}