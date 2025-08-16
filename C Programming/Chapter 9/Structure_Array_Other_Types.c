#include<stdio.h>

struct Employee{
    int Emp_ID;
    float Salary;
    char name[100];
};

int main(){

    struct Employee emps = {123, 10000.0, "Bindu"};
    
    printf("Employee Name: %s\n", emps.name);
    printf("Employee Salary: %f\n", emps.Salary);
    printf("Employees ID: %d\n", emps.Emp_ID);

    return 0;
}