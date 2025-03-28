//Temperature Converter.

#include<stdio.h>
int main()
{
    char a,b;
    float C,K,F;
    printf("Choose two Scale.\nFirst from then to.\nCelsius(c) or Fahrenheit(f) or kelvin(k):");
    scanf("%c %c",&a,&b);

    if(a=='c')
    {
        if(b=='f')
        {
            printf("value of Celsius:");
            scanf("%f",&C);
            printf("Fahrenheit:%f",(9/5*C)+32);
        }
        else if(b=='k')
        {
            printf("value of Celsius:");
            scanf("%f",&C);
            printf("Kelvin:%f",C+273);
        }
        else
        {
            printf("Invalid");
        }
    }

    else if(a=='k')
    {
        if(b=='c')
        {
            printf("value of Kelvin:");
            scanf("%f",&K);
            printf("Celsius:%f",K-273);
        }
        else if(b=='f')
        {
            printf("value of Kelvin:");
            scanf("%f",&K);
            printf("Fahrenheit:%f",(9*K-9*273)/5+32);
        }
        else
        {
            printf("Invalid");
        }

    }

    else if(a=='f')
    {
        if(b=='c')
        {
            printf("value of Fahrenheit:");
            scanf("%f",&F);
            printf("Celsius:%f",(5*F-5*32)/9);
        }
        else if(b=='k')
        {
            printf("value of Fahrenheit:");
            scanf("%f",&F);
            printf("Kelvin:%f",(5*F-5*32)/9-273);
        }
        else
        {
            printf("Invalid");
        }

    }
    else
        {
            printf("Invalid");
        }


    return 0;
}


