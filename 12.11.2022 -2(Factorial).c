/*
(Loop Control Statement)-Factorial
*/
#include<stdio.h>
int main()
{
    while(1)
    {
        int a,i,f=1;
        printf("Input Number:");
        scanf("%d",&a);
        for(i=1; i<=a; i++)
        {
         f=f*i;
        }
        printf("Factorial of %d is %d\n\n",a,f);
    }


    return 0;
}
