#include<stdio.h>

struct person
{
    int age;
    float salary;

};

int main()
{
    struct person person1, person2;

    person1.age = 25;
    person1.salary = 50000.50;
    printf("Age: %d\nSalary: %f",person1.age, person1.salary);

    person2.age = 30;
    person2.salary = 75000.75;
    printf("\nAge: %d\nSalary: %f",person2.age, person2.salary);
    
      
    return 0;
}