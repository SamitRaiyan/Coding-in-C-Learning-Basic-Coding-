#include<stdio.h>
int main()
{
    int i,n;
    printf("Total number : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter all the numbers :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int max = a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    printf("Max : %d\n",max);

    int min = a[0];   //60,70,80,5,30
    for(i=0;i<n;i++){
        if(a[i]<min){
            min = a[i];
        }
    }
    printf("Min : %d",min);

    return 0;
}
