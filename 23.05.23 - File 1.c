#include<stdio.h>

int main()
{
    FILE *Name;
    char S[]="Samit Raiyan";
    int length = strlen(S);
    Name = fopen("Name.txt","w");
    if(Name == NULL){
        printf("Does't exist");
    }
    else{
        printf("Opened");
        for(int i = 0; i<length; i++){
            fputc(S[i],Name);
        }
        fclose(Name);
    }

    return 0;
}
