/*
(Loop Control Statement)-Number Table
*/
#include<stdio.h>
int main()
{
    //while(1)
    {
        int i,n,m;

        printf("Input Number:");
        scanf("%d",&m);
        for(n=1; n<=m; n++)
        {
            printf("The Number table of %d:\n",n);
            for(i=1; i<=10; i++)
            {
                printf("%d X %d = %d\n",n,i,n*i);
            }

        }
    }

    return 0;
}
