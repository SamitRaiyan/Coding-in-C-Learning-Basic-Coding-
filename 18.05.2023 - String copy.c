#include<stdio.h>
int main()
{
    char a[50],b[50];
    printf("Input the data : ");
    gets(a);
    printf("First String : %s ",a);
    for(int i=0;i<50;i++){
        b[i]=a[i];
    }
    printf("\nSecond String : %s",b);

    printf("\n");
    return 0;
}
