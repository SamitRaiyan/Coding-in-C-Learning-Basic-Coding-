#include<stdio.h>
int main()
{
    char a[]={"Samit"};
    char b[]={" Raiyan"};
    int alength = strlen(a);
    //int blength = strlen(b);
    //int total = alength+blength;
    for(int i=0;i<50;i++){
        a[alength+i]=b[i];
    }
    printf("%s",a);

    printf("\n");
    return 0;
}
