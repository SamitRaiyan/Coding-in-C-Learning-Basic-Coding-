// 26.11.2022 -5 Array
/*
   Array- Value initialization
*/

#include<stdio.h>
int main()
{
    int a[5];
    int i,n;
    printf("input the value of array:");
    for(i=0; i<=4; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("input the digit:");
     scanf("%d",&n);

    printf("Ans=%d\n",a[n]);

    return 0;
}

