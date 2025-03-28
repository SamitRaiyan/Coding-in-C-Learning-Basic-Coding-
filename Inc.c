#include<stdio.h>
int main()
{
    int a=10,b=25;
    a=a++ + b++;
    printf("%d %d ",a,b);
    b= ++a + ++b;
    printf("%d %d",a,b);
    return 0;
}
