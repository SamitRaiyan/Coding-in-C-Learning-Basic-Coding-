//Reverse Number
#include<stdio.h>
int main()
{
    while(1)
    {
        int a,Rem,Rev=0,temp;
        printf("input the numbers:");
        scanf("%d",&a);
        temp=a;
        while(temp!=0)
        {
            Rem=temp%10;
            Rev=Rev*10+Rem;
            temp=temp/10;
        }
        printf("Reverse of %d is %d.\n",a,Rev);
        if(a==Rev)
            {
                //printf("Reverse of %d is %d.\n\n",a,Rev);
               printf("Palindrome\n\n");
            }
        else
        {
            //printf("Reverse of %d is %d.\n\n",a,Rev);
           printf("Not Palindrome\n\n");
        }



    }
    getch();
}
