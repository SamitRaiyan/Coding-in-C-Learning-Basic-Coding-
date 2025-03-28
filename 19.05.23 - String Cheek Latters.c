#include<stdio.h>
int main()
{
    char a[100],ch;
    int i,latter,digits,others;
    i=latter=digits=others=0;
    printf("Input : ");
    gets(a);

    while((ch = a[i])!='\0'){
        if(ch>='a'&& ch<='z' || ch>='A' && ch<='Z'){
            latter++;
        }
        else if(ch >='0'&& ch<='9'){
            digits++;
        }
        else{
            others++;
        }
        i++;
    }
    printf("%d",latter);
    printf("%d",digits);
    printf("%d",others);

    return 0;
}
