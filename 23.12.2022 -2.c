#include<stdio.h>
int main()
{
    int i,n,c=0,fibo;
    int f =0;
    int s =1;
    printf("Range:");
    scanf("%d",&n);
    printf("The Fibonacchi series is: ");

    while(c<n)
    {

        if(c<=1)
        {
            fibo=c;
        }
        else
        {
            fibo=f+s;
            f=s;
            s=fibo;
        }
        printf("%d,",fibo);
        c++;
    }


    return 0;
}

