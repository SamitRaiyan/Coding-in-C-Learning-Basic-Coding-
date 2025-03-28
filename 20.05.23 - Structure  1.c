#include<stdio.h>

struct person
{
    char name[50];
    int age;
    float salary;
};
void display(struct person Per[])
{
    int i;
    for(i=0;i<2;i++){
        printf("\nPerson %d : \n",i+1);
        printf("Name : %s\n",Per[i].name);
        printf("Age : %d\n",Per[i].age);
        printf("Salary : %f\n",Per[i].salary);
    }
}

int main()
{
    struct person p[4];
    int i;
    for(i=0;i<2;i++){
        printf("Enter the details of person %d :\n",i+1);
        printf("Name : ");
        fflush(stdin);
        gets(p[i].name);
        printf("Age : ");
        scanf("%d",&p[i].age);
        printf("Salary : ");
        scanf("%f",&p[i].salary);

        }
    display(p);

    getch();
}
