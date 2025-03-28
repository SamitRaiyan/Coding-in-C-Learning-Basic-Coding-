#include<stdio.h>

int max(int x[],int length)
{
    int i,m;

    m= x[0];
    for(i=0;i<length;i++){
        if(x[i]>m){
            m=x[i];
        }
    }
    printf("The Max : %d",m);
}

int main()
{
    int n;
    printf("How many numbers do you need ?\nAns : ");
    scanf("%d",&n);
    int a[n];
    for(int j=0;j<n;j++){
        scanf("%d",&a[j]);
    }

    max(a,n);
    return 0;

}
