#include<stdio.h>
int main(){
    int num,binary,decimal = 0,rem,weight;
    printf("Enter the binary: ");
    scanf("%d",&binary);
    weight = 1;
    num = binary;
    while(binary!=0){
        rem = binary%10;
        decimal = decimal +rem*weight;
        binary = binary/10;
        weight = weight*2;
    }
    printf("The decimal equivalent of %d is %d",num,decimal);
    return 0;
    
}