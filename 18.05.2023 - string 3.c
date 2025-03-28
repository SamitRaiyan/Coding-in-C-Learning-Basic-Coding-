#include<stdio.h>
int main()
{
    char a[]="I am ";
    char b[]="Samit Raiyan";
    int i=0,j,length=0;
    while(a[i]!='\0'){
        i++;
        length++;
    }
    while(b[j]!='\0'){
        a[length+j] = b[j];
    }
    printf("%s",a);

    printf("\n");
    return 0;
}
