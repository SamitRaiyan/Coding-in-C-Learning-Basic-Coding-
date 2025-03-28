#include<stdio.h>
int main()
{
    int a,b,c;
    printf("input a & b :");
    scanf("%d %d",&a,&b);
    int *p1=&a;
    int *p2=&b;
    printf("Ans:%d",*p1+*p2);

    return 0;
}
