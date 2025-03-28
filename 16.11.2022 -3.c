//Armstrong Number

#include<stdio.h>
int main()
{


        int i,r,temp,sum=0;

        for(i=0;i<=1000;i++)
        {temp=i;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum+r*r*r;
            temp=temp/10;
        }
        if(i==sum)
        {
            printf("%d  ",i);
        }
        sum=0;
        }
    return 0;
}

