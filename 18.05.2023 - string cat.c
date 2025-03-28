#include<stdio.h>
int main()
{
    char a[]="I am ";
    char b[]="Samit Raiyan.";
    int i=0,j=0,length=0;
    while(a[i]!='\0'){
    length++;
        i++;
    }
    while(b[j]!='\0'){
        a[length+j] = b[j];
        j++;
    }
    printf("%s",a);

    printf("\n");
    return 0;
}
