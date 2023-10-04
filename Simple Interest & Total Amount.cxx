#include <stdio.h>
#include <stdlib.h>
int main(void) {
   int P;
   float R,N,SI,TA;
   printf("Enter Princple amount : ");
   scanf("%d",&P);
   printf("Interest Rate : ");
   scanf("%f",&R);
   printf("Number of Years : ");
   scanf("%f",&N);
   SI=(P*R*N)/100;
   printf("Simple Interest is : %f",SI);
   TA=P+SI;
   printf("\n");
   printf("Total Amount is : %f",TA);
   return EXIT_SUCCESS;
}