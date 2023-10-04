#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a[100],i,limit;
    printf("Enter array limit : ");
    scanf("%d",&limit);
    printf("Enter values of array : ");
    {for(i=0;i<limit;i++)
    {scanf("%d",&a[i]);
    }}
    printf("Enterd numbers are : ");
    {for(i=0;i<limit;i++)
    {printf("%d ",a[i]);}
    }
    return 0;
}