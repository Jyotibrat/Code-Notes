#include<stdio.h>

struct Employee
{
    int Emp_ID;
    float Salary;
    char name[100];
};

int main(){

    struct Employee emps[100];
    printf("Enter the name of the first employee: ");
    scanf("%99s", emps[0].name);
    while(getchar() != '\n');
    printf("Enter the name of the second employee: ");
    scanf(" %s", emps[1].name);
    while(getchar() != '\n');
    printf("Enter the Salary for the first employee: ");
    scanf("%f", &emps[0].Salary);
    printf("Enter the Salary of the second employee: ");
    scanf("%f", &emps[1].Salary);
    printf("Enter the Employee ID for the first employee: ");
    scanf("%d", &emps[0].Emp_ID);
    printf("Enter the Employee ID for the second employee: ");
    scanf("%d", &emps[1].Emp_ID);

    printf("Name of Employee 1: %s\n", emps[0].name);
    printf("Salary of Employee 1: %f\n", emps[0].Salary);
    printf("Employee ID of Employee 1: %d\n", emps[0].Emp_ID);
    printf("Name of Employee 2: %s\n", emps[1].name);
    printf("Salary of Employee 2: %f\n", emps[1].Salary);
    printf("Employee ID of Employee 2: %d\n", emps[1].Emp_ID);

    return 0;
}