#include<stdio.h>
int main()
{
    int i,n,max,min,temp;
    printf("How many number to compare?\n");
    scanf("%d",&n);
    int a[n];
    printf("The numbers:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
         temp=a[0];
        if(a[i]>a[0])
    {
        temp=a[i];
    }
    else
    {
        temp=a[0];
    }

    }
    max=temp;
    printf("Max: %d",max);


    return 0;
}
