
#include<stdio.h>
int main()
{
    char a[30]="Samit Raiyan";
    char b[30];
    int i,len=0,j;
    while(a[i]!='\0'){
        i++;
        len++;
    }
    printf("%d\n",len);
    for(j=0;i=len-1;i>=0;i--;j++){
        b[j]=a[i];
    }
    printf("%s",a);
    printf("%s",b);


    return 0;
}
