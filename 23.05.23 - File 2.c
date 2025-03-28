#include<stdio.h>
int main()
{
    FILE *file2;
    char name[30];
    file2 = fopen("File2.txt","r");
    if(file2 == NULL){
        printf("No");
    }
    else{
        printf("File is opened.\n");
        printf("Name : ");
        gets(name);

        fputs(name,file2);
        fputs("\n",file2);
        fclose(file2);
    }

    return 0;
}
