#include<stdio.h>
int main()
{
    int f(int n)
    {
        if(n>0)
            return n*f(n-1);
        else
            return 1;
    }
    int main()
    {
        int n;
        printf("input n:");
        scanf("%d",&n);
        printf("f of %d=%d",n,f(n));
        return 0;

    }

    return 0;
}

