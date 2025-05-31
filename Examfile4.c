#include<stdio.h>
int main()
{
    int size;
    printf("Enter the value of size:");
    scanf("%d",&size);
    int sum,a1[size],a2[size],i,j,*p1[size],*p2[size];
     p1[size]=&a1[0];
    p2[size]=&a2[0];

    printf("Elements of array:");
    printf("\n");
    for(i=0;i<size;i++)
    {
        printf("a1[%d]:",i);
        scanf("%d",&a1[i]);
    }
    printf("Elements of array:");
    printf("\n");
    for(j=0;j<size;j++)
    {
        printf("a2[%d]:",j);
        scanf("%d",&a2[j]);
    }
    
   for(i=0;i<size;i++)
  {
         for(j=0;j<size;j++)
    {
        sum= *p1[size] + *p2[size];
    }
  }     
    printf("The sum of two array is: %d ",sum);
    return 0;   
}