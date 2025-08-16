#include<stdio.h>
#include<string.h>

struct employee{
    int emp_id;
    double salary;
    char name[100];
};

int main(){
    struct employee e1;

    strcpy(e1.name, "Bindupautra Jyotibrat");
    e1.emp_id = 2310963;
    e1.salary = 100000000000000.0;
    printf("The name of the employee is: %s\n", e1.name);
    printf("The Employee ID of the employee is: %d\n", e1.emp_id);
    printf("The Salary of the employee is: %f\n", e1.salary);

    return 0;
}