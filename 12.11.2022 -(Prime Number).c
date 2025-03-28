/*
(Loop Control Statement)-Prime Number
*/
#include<stdio.h>
int main()
{
    while(1)
    {
        int a;
        printf("Input Number:");
        scanf("%d",&a);
       if(a==1)
        {
           printf("Not Prime Number\n");
        }
        else if(a==2 || a==3 || a== 5 || a==7)
        {
            printf("Prime Number\n");
        }

       else if(a>3)
        {
          if(a%2==0 || a%3==0 || a%5==0 || a%7== 0)
          {
              printf("Not Prime Number\n");
          }
          else
            {
             printf("Prime Number\n");
            }
        }

        else
        {
            printf("invalid Operation\n");
        }
    }

        return 0;

}

