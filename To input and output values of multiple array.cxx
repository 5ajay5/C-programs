#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,j,m,n,values[10][10];
    printf("Enter size of array : ");
    scanf("%d%d",&m,&n);
    printf("Enter values \n");
    {
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
       { scanf("%d",&values[i][j]);}
    }}printf("Values are : \n");
    {for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {printf("%d\t",values[i][j]);}printf("\n");
    }
    }
    return 0;
}