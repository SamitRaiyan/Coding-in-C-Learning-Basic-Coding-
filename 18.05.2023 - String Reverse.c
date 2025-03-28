#include<stdio.h>
int main()
{
    char a[30]="Samit Raiyan";
    char b[30];
    int i=0,len=0,j=0;
    while(a[i]!='\0'){
        i++;
        len++;
    }
    printf("%d\n",len);
    for(i=len-1;i>=0;i--){
        b[j]=a[i];
        j++;
    }
    printf("%s\n",a);
    printf("%s",b);


    return 0;
}
