#include <stdio.h>
#include <stdlib.h>
#include<cmath>
int main(void) {
   float num1,num2,num3,average;
   printf("Enter 3 numbers");
   scanf("%f%f%f",&num1,&num2,&num3);
   average=(num1+num2+num3)/3;
   printf("Result is :%f",average);
   return EXIT_SUCCESS;
}