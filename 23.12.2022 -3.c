#include<stdio.h>

int main()
{   int i,n,sum=1,b=0,a=1;
    printf("Enter the range :");

    scanf("%d",&n);
    if(n>0) {
            printf("The series is:  ");
        if(n==1)
            printf("0");
        else if (n==2)
            printf("0,1");
        else
        {
            printf("0,1");
            for(i=0; i<n-2; i++)
            {
                if(i!=n-2)
                    printf(",");
                printf("%d",sum);
                b=a;
                a=sum;
                sum=b+a;
            }
        }
    }
        else
            printf("It is a invalid number chutia");
        return 0;
    }
