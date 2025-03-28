/*
goto Statement
It is used to jump to a leble.
Leble is shown by : .
*/

#include<stdio.h>
int main()
{
    int i=1;
    p: printf("%d\n",i);
    i++;
    if(i<5)
    goto p;


    return 0;
}
