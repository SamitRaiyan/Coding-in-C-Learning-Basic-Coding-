//A program to cheek Leap Year.

#include<stdio.h>
int main()
{
    int a;
    printf("input a year:");
    scanf("%d",&a);
    if(a>0)
    {
        if(a%4==0)
        {
            printf("Leap Year");
        }
        else if(a%100==0)
        {
            printf("Leap year");
        }
        else if(a%400==0)
        {
            printf("Leap year");
        }
        else
        {
            printf(" Non Leap year");
        }
    }
    else
    {
        printf("Are you Antor?");
    }



    return 0;
}
