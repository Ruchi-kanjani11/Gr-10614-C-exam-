#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    if(num%3==0 && num%5==0)
    {
        printf("Number is divisible by 3 and 5 both");
    }
    else
    {
        printf("Number is not divisible by 3 and 5 both");
    }
    return 0;
} 