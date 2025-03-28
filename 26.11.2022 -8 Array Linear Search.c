// 26.11.2022 -8 Array
/*
   Array-  Linear Search
*/

#include<stdio.h>
int main()
{

    int i,n,v,p=-1;
    printf("Enter the numbers of digits: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values of digits: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Input the searching value:");
    scanf("%d",&v);
    for(i=0;i<n;i++)
    {
        if(v==a[i])
        {
            p=i+1;
            break;
        }
    }
    if(p==-1)
    {
        printf("Value is missing");
    }
    else
    {
        printf("The index of %d is arr[%d].\n",v,p-1);
    }





    getch();
}




