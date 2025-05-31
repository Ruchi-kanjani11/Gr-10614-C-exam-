#include<stdio.h>
int main()
{   
    int size;
    printf("Enter size:");
    scanf("%d",&size);
    char str[size];
    int count=0,i,j;
    printf("Enter any str: ");
    scanf("%s",&str);
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            count++;
        }
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(str[size]=65,69,73,79,85,97,101,105,111,117)
            {
                printf(" ");
            }
            else 
            {
                printf("%d",count);
            }
        }
    }
    

    return 0;
}