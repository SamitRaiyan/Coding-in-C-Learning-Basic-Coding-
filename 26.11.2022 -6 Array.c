// 26.11.2022 -6 Array
/*
   Array- Sum
*/

#include<stdio.h>
int main()
{
    int a[5];
    int sum=0,i;
    printf("input the value of array:");
    for(i=0; i<=4; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<=4; i++)
    {
        sum=sum+a[i];
    }

    /*sum=a[0]+a[1]+a[2]+a[3]+a[4];*/
    printf("Ans=%d\n",sum);

    return 0;
}


