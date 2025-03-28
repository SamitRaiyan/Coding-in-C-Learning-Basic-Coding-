//Conditional Control Statement-(if-else)

#include<stdio.h>
int main()
{
    int num;
    printf("input number:");
    scanf("%d",&num);
    if(num!=0)
{
        if(num%2==0)
        {
            printf("even");
        }
        else
        {
            printf("odd");
        }


}

    return 0;
}

