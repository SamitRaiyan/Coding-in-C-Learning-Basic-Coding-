//0 1 1 2 3 5 8 13 21
#include<stdio.h>
int main()
{
    int i,n;
    printf("Total number : ");
    scanf("%d",&n);
    int a[n];
    a[0] = 0;
    a[1] = 1;
    for(i=2;i<n;i++){
      a[i]=a[i-1]+a[i-2];
    }
    //print values
    for(i=0;i<n;i++){
        printf(" %d ",a[i]);
    }

    return 0;
}
