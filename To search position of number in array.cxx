#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,limit,values[100],searchkey,flag=0;
    printf("Enter number of arrays");
    scanf("%d",&limit);
    
    printf("Enter values of array");
    for(i=0;i<limit;i++)
    {scanf("%d",&values[i]);}
    
    printf("Enter searchkey");
    scanf("%d",&searchkey);
    
    for(i=0;i<limit;i++){
        if(searchkey==values[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Value found at the position %d",i+1);}
        else{
            printf("Value not found");
        }
        return 0;
}
    