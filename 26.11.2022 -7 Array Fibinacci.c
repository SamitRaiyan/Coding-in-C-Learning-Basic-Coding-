// 26.11.2022 -7 Array
/*
   Array- Fibonacchi
*/

#include<stdio.h>
int main()
{

    int i,n;
    printf("Enter the numbers of terms: ");
    scanf("%d",&n);
    int a[n];
    a[0]=0;
    a[1]=1;
    for(i=2; i<n; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    getch();
}



