#include<stdio.h>
#include<string.h>

struct Employee
{
    int emp_id;
    char name[100];
    double salary;
};

int main(){

    int emp1, emp2, emp3, n1, n2, n3;
    double s1, s2, s3; 

    printf("Enter the Employee ID of the first employee: ");
    scanf("%d", &emp1);
    printf("Enter the Employee ID of the second employee: ");
    scanf("%d", &emp2);
    printf("Enter the Employee ID of the third employee: ");
    scanf("%d", &emp3);

    printf("Enter the Salary for the first employee: ");
    scanf("%lf", &s1);    
    printf("Enter the Salary for the second employee: ");
    scanf("%lf", &s2);
    printf("Enter the Salary for the third employee: ");
    scanf("%lf", &s3);

    printf("Enter the size of the name of the first employee: ");
    scanf("%d", &n1);
    printf("Enter the size of the name of the second employee: ");
    scanf("%d", &n2);
    printf("Enter the size of the name of the third employee: ");
    scanf("%d", &n3);

    char name1[n1], name2[n2], name3[n3];

    printf("Enter the name of the first employee: ");
    scanf(" %s", &name1);
    while(getchar() != '\n');
    printf("Enter the name of the second employee: ");
    scanf(" %s", &name2);
    while(getchar() != '\n');
    printf("Enter the name of the third employee: ");
    scanf(" %s", &name3);
    while(getchar() != '\n');

    struct Employee e1, e2, e3;

    e1.emp_id = emp1;
    e2.emp_id = emp2;
    e3.emp_id = emp3;

    e1.salary = s1;
    e2.salary = s2;
    e3.salary = s3;

    strcpy(e1.name, name1);
    strcpy(e2.name, name2);
    strcpy(e3.name, name3);

    printf("\nFirst Employee Name: %s", e1.name);
    printf("\nFirst Employee Employee ID: %d", e1.emp_id);
    printf("\nFirst Employee Salary: %f", e1.salary);
    printf("\nSecond Employee Name: %s", e2.name);
    printf("\nSecond Employee Employee ID: %d", e2.emp_id);
    printf("\nSecond Employee Salary: %f", e2.salary);
    printf("\nThird Employee Name: %s", e3.name);
    printf("\nThird Employee Employee ID: %d", e3.emp_id);
    printf("\nThird Employee Salary: %f", e3.salary);

    return 0;
}