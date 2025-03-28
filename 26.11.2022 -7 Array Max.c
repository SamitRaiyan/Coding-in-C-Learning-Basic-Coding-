// 26.11.2022 -7 Array
/*
   Array- Max
*/

#include<stdio.h>
int main()
{

    int i,n;

    printf("Input the number of digits: ");
    scanf("%d",&n);
    int a[n];
    printf("input the value of digits: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max = a[0];

    for(i=1; i<n; i++)
    {
        if(max< a[i])
        {
            max =a[i];
        }
    }
    printf("Maximum Digit=%d\n\n",max);


    int min = a[0];

    for(i=1; i<n; i++)
    {
        if(min > a[i])
        {
            min =a[i];
        }
    }
    printf("Minimum Digit=%d\n\n",min);

    getch();
}



