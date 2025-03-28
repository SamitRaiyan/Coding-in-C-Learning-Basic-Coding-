#include<stdio.h>
int main()
{
    int i,n,s;
    printf("Total number : ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter the data : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Array1 :");
    for(i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    for(i=0;i<n;i++){
        b[i]= a[i];
    }
    printf("\nArray2 :");
    for(i=0;i<n;i++){
        printf(" %d ",b[i]);
    }

    return 0;
}
