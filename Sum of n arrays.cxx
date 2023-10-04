#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a[100],i,limit,sum=0;
    printf("Enter array limit : ");
    scanf("%d",&limit);
    printf("Enter values of array : ");
    {for(i=0;i<limit;i++)
    {scanf("%d",&a[i]);
    }}printf("Sum of array is : ");
    for(i=0;i<limit;i++){
    sum=sum+a[i];
    }printf("%d",sum);
    return 0;
}