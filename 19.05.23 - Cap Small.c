#include<stdio.h>
int main()
{
    char a[100];
    int i,cap,small,others;
    i=cap=small=others=0;
    printf("Input : ");
    gets(a);
    while(a[i]!='\0'){
        if(a[i]>=65 && a[i]<=90){
            cap++;
        }
        else if(a[i]>=97 && a[i]<=122){
            small++;
        }
        else{
            others++;
        }
        i++;
    }
    printf("%d\n",cap);
    printf("%d\n",small);
    printf("%d\n",others);

    return 0;
}
