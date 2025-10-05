#include<stdio.h>
void main(){
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    
    if(y>0){
        while(y!=0){
            x++;
            y--;
        }
    }
    else if(y<0){
        while(y!=0){
            x--;
            y++;
        }
    }
    printf("the sum of two numbers is:%d",x);

}