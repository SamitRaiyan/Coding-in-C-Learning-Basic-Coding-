#include<stdio.h>
int main()
{
    FILE *file4;
    char ch;
    file4 = fopen("File3.txt","r");

    if(file4 == NULL){
        printf("No");
    }
    else{
        printf("File is opened.\n");
        while(!feof(file4)){
            ch = fgetc(file4);
            printf("%c",ch);
        }

        fclose(file4);
    }

    return 0;
}

