#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("How many numbers are used here: ");
    scanf("%d",&n);
    int a[n];
    printf("Input the digits: \n");
    for(i=0;i<n;i++){
     scanf("%d",&a[i]);
     sum = sum+a[i];
    }
    printf("The total is %d.\n",sum);
    printf("The average is %.2f.",(float)sum/n);

    return 0;
}
