#include <stdio.h>
int main()
{   int n;
    float sum = 1.00;
    printf("Enter the value of 'n' for printing series upto 1/n : ");
    scanf("%d", &n);
    printf("The series is : 1+");
    for (int i = 2; i <= n; i++)
    {
        if (i == n)
        {
            printf("1/%d", i);
            sum = sum + 1.00 / i;
            break;
        }
        else
        {       printf("1/%d+", i);
            sum = sum + 1.00 / i;
        }
    }printf("\nThe sum of the series is : %.02f",sum);
	return 0;
}