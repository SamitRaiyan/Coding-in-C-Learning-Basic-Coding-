// 26.11.2022 -4 Array
/*
   Array- Value initialization
*/

#include<stdio.h>
int main()
{
    int a[5];
    int i;
    printf("input the values:");
    for(i=0; i<=4; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<=4; i++)
    {
        printf("Ans=%d\n",a[i]);
    }

    return 0;
}

