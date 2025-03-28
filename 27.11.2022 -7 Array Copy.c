// 27.11.2022 -7 Array
/*
   Array- Copy an array and put it into another array.
*/

#include<stdio.h>
int main()
{

    int i,n;
    printf("Enter the numbers of terms: ");
    scanf("%d",&n);
    int array1[n],array2[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    for(i=0;i<n;i++)
    {
        array2[i]=array1[i];
    }
    printf("Array2: ");

    for(i=0;i<n;i++)
    {
        printf("%d ",array2[n]);
    }

    getch();
}



