#include<stdio.h>
int main()
{
    FILE *file3;
    char name[30],address[40];
    int age,salary;
    file3 = fopen("File3.txt","a");
    if(file3 == NULL){
        printf("No");
    }
    else{
        printf("File is opened.\n");
        printf("Name : ");
        gets(name);
        printf("Home : ");
        gets(address);
        printf("Age : ");
        scanf("%d",&age);
        printf("Salary : ");
        scanf("%d",&salary);

        fprintf(file3,"Name : %s\nAddress : %s\nAge : %d\nSalary : %d\n",name,address,age,salary);


        printf("Task done.");
        fclose(file3);
    }

    return 0;
}

