#include<stdio.h>

typedef struct Employee{
    int Emp_ID;
    char name[100];
    float Salary;
} Emp; // It is basically an alias and is used mainly to avoid writing this in the main function: struct Employee e (Employee e is only in this case).

int main(){

    Emp e;
    printf("Enter the Name of Employee: ");
    scanf("%s", e.name);
    printf("Enter the Salary of Employee: ");
    scanf("%f", &e.Salary);
    while(getchar() != '\n');
    printf("Enter the Employee ID of Employee: ");
    scanf(" %d", &e.Emp_ID);

    printf("\nName of Employee: %s", e.name);
    printf("\nSalary of Employee: %f", e.Salary);
    printf("\nEmployee ID of Employee: %d", e.Emp_ID);

    typedef int bindu; // We can use typedef in any type of datatype but we mainly use it in struct data structure.
    bindu a = 10;
    printf("\nThe value of a is: %d", a);

    return 0;
}