//Strong Number

#include<stdio.h>
int main()
{
    while(1)
    {
        int a,r,temp,st=0,i,fact;
        printf("input the numbers:");
        scanf("%d",&a);
        temp=a;
        while(temp!=0)
        {
            r=temp%10;
            fact=1;
            for(i=1; i<=r;i++)
        {
            fact=fact*i;
        }
            st=st+fact;
            temp=temp/10;
        }
        if(a==st)
        {
            printf("Strong Number\n\n");
        }
        else
        {
            printf("Not Strong Number\n\n");
        }



    }
    return 0;
}

