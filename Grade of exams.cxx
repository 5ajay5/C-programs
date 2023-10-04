#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int ts,s;
    float a;
    printf("Enter Your Score : ");
    scanf("%d",&s);
    printf("Enter Total Score of the exam : ");
    scanf("%d",&ts);
    a=(s*100)/ts;
    if(a>=0 && a<10){
        printf("Failed\n Grade = E");}
        else if(a>=10 && a<20){
            printf("Failed\n Grade = E+");}
            else if(a>=20 && a<30){
                printf("Failed\n Grade = D");}
                else if(a>=30 && a<40){
                    printf("Passed\n Grade = D+");}
                    else if(a>=40 && a<50){
                        printf("Passed\n Grade = C");}
                        else if(a>=50 && a<60){
                            printf("Passed\n Grade = C+");}
                            else if(a>=60 && a<70){
                                printf("Passed\n Grade = B");}
                                else if(a>=70 && a<80){
                                    printf("Passed\n Grade = B+");}
                                    else if(a>=80 && a<90){
                                        printf("Passed\n Grade = A");}
                                        else if(a>=90 && a<=100){
                                            printf("Passed\n Grade = A+");}
                                            else{
                                                printf("Something went wrong");}
                                                return EXIT_SUCCESS;
                                                
    
}
        