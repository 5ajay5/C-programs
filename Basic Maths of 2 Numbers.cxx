#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int num1,num2,choice,A;
    printf("Enter 2 numbers \n");
    scanf("%d%d",&num1,&num2);
    printf(" For Addituon, type 1 \n For Subtraction, type 2 \n For Multiplication, type 3 \n For Division, type 4 \n");
    scanf("%d",&choice);
    
    if(choice==1)
    {
    A=num1+num2;
    printf("Answer is %d",A);}
    else if(choice==2)
    {
    A=num1-num2;
    printf("Answer is %d",A);}
    else if(choice==3)
    {
    A=num1*num2;
    printf("Answer is %d",A);}
    else if(choice==4)
    {
    A=num1/num2;
    printf("Answer is %d",A);}
    else
    {
    printf("You are a fool");
    }
    return EXIT_SUCCESS;
} 