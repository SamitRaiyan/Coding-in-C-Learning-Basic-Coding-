#include<stdio.h>
int main()
{
    while(1)
    {
        int a,i,fact=1;
        printf("input the numbers:");
        scanf("%d",&a);
        for(i=1; i<=a;i++)
        {
            fact=fact*i;
        }

        printf("Factorial:%d\n\n",fact);

    }
    getch();
}


