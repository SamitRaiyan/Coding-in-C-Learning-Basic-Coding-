#include<stdio.h>
int main()
{
    while(1)
    {
        int a,r,temp,s=0;
        printf("input the numbers:");
        scanf("%d",&a);
        temp=a;
        while(temp!=0)
        {
            r=temp%10;
            s=s+r;
            temp=temp/10;
        }
        printf("Ans:%d\n\n",s);



    }
    getch();
}

