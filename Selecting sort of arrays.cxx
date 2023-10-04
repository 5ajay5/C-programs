#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int limit,values[100],i,j,temp;
    printf("Enter limit : ");
    scanf("%d",&limit);
    printf("Enter values : ");
    for(i=0;i<limit;i++){
    scanf("%d",&values[i]);}
    {
        for(i=0;i<limit-1;i++){
            for(j=i+1;j<limit;j++){
                if(values[j]<values[i])
                {
                    temp=values[j];
                    values[j]=values[i];
                    values[i]=temp;}
            }
        }
    }printf("Sorted order : ");
    for(i=0;i<limit;i++)
    {printf("%d  ",values[i]);}
    return 0;
}