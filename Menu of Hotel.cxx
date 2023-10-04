#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int choice;
    printf("1 for Porotta\n2 for Dosa\n3 for Chaya\n4 for Puttu\nEnter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    printf("You choose Porotta");
    break;
    case 2:
    printf("You choose Dosa");
    break;
    case 3:
    printf("You choose Chaya");
    break;
    case 4:
    printf("You choose Puttu");
    break;
    default:
    printf("Foooolll!!!!");
    }
return EXIT_SUCCESS;
}
    