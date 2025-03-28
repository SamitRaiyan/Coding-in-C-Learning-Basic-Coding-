/*Program to converse from lowercase to uppercase with library function.
Here the library function is [toupper()].
*/
#include<stdio.h>
int main()
{
    char upper,lower;
    printf("Enter any lowercase later:");
    scanf("%c",&lower);
    upper= toupper(lower);
    printf("The uppercase latter:%c",upper);

    return 0;
}

