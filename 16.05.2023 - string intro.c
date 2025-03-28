#include<stdio.h>
int main()
{
    char name[10];
    name[0]='a';
    name[1]='t';
    name[2]='a';
    name[3]='u';
    name[4]='r';
    name[5]=' ';
    name[6]='a';
    name[7]='h';
    printf("Name = %s",name);

    char address[]="Dhaka,\
    Bangladesh.";
    printf("\nAddress = %s",address);

    return 0;

}
