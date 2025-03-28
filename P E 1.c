#include<stdio.h>
int main()
{
    int a,n,i;
    printf("input n:");
    scanf("%d",&n);
    a=1;
    for(i=1;i<=n;i++)
    {
        a=a*i;
    }
    printf("Ans=%d",a);
    return 0;
}
