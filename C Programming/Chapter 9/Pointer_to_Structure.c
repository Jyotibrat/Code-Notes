#include<stdio.h>
#include<string.h>

struct Employee
{
    int Emp_ID;
    float Salary;
    char name[100];  // ← Change this line from 'char name' to 'char name'
};

int main(){
    struct Employee *ptr;
    struct Employee e1;

    e1.Emp_ID = 123;
    strcpy(e1.name, "bindu");
    e1.Salary = 100000.0;
    
    ptr = &e1;

    printf("Employee Name: %s\n", (*ptr).name);
    printf("Employee Salary: %.2f\n", (*ptr).Salary);
    printf("Employee ID: %d\n", (*ptr).Emp_ID);

    return 0;
}
