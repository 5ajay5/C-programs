#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int i,j,n;
printf("Enter number of rows");
scanf("%d",&n);
{
    for(i=0;i<n;i)
    {
        for(j=0;j<n;j++)
        {printf("* ");}
        printf("\n");
        n=n-1;
        
    }
}
    return 0;
}