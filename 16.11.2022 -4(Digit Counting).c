//Digit Counting

#include<stdio.h>
int main()
{
    while(1)
    {
        int a,r,temp,s=0,count=0;
        printf("input the numbers:");
        scanf("%d",&a);
        temp=a;
        while(a!=0)
        {
            a=a/10;
            ++count;
        }
        printf("Total digits:%d\n\n",count);



    }
    getch();
}

