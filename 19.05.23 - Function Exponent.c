#include<stdio.h>

void exponent(int base,int power)
{
    double result =1;
    for(int i=1;i<=power;i++){
        result = result*base;
    }
    printf("Ans : %lf\n",result);
}

int main()
{
    int base, power;
    printf("Input the base : ");
    scanf("%d",&base);
    printf("Input the power : ");
    scanf("%d",&power);

    exponent(base,power);
    exponent(2,4);
}
