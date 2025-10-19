#include<stdio.h>
#include<stdbool.h>

int main(void)
{
    bool digit_seen[10] = {false};// digit_seen[10]={0,..,0}
    int digit;
    long n;//user input

    printf("Enter a number: ");
    scanf("%ld",&n);

    while(n>0)//checking each digit 
    {
        digit = n % 10;
        if(digit_seen[digit])
            break;//breaks if true
        digit_seen[digit] = true;
        n /= 10;
    }

    if(n>0)
        printf("repeated digit\n");
    else
        printf("No repeated digit\n");
    
    return 0;
    
}