/*
Swapping two numbers with temporary variable.
*/
#include<stdio.h>
int main()
{
    int n1,n2,t;
    printf("input n1 & n2=");
    scanf("%d %d",&n1,&n2);

    t=n1;
    n1=n2;
    n2=t;

    printf("n1=%d\n",n1);
    printf("n2=%d",n2);

    return 0;
}
