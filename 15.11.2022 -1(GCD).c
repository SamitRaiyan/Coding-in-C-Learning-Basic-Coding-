#include<stdio.h>
int main()
{
    while(1)
    {
        int n1,n2,r,num1,num2,gcd,lcm;
        printf("input two numbers:");
        scanf("%d%d",&num1,&num2);
        n1 = num1;
        n2 = num2;
        while(n2!=0)
        {
            r=n1%n2;
            n1=n2;
            n2=r;

        }
        gcd=n1;
        lcm=(num1*num2)/gcd;
        printf("gcd:%d\n",gcd);
       printf("lcm:%d\n",lcm);



    }
    getch();
}
