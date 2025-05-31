#include<stdio.h>
int main()
{
    int num,i,j;
    printf("Enter any three digit positive number: ");
    scanf("%d",&num);
    
    i=num%10;
    while(num>=9)
    {
        num=num/10;
        j=num;
    }
    printf("Sum of First And Last digit is: %d ",i+j);
    
    return 0;
}