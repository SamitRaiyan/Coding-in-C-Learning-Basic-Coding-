//Program to converse from lowercase to uppercase without library function.

#include<stdio.h>
int main()
{
    int n;
    char lower;
    printf("Enter any lowercase later:");
    scanf("%c",&lower);
    printf("The uppercase latter:%c",lower-32);

    return 0;
}

