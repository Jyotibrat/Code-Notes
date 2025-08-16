#include<stdio.h>

struct employee {  // Remove parentheses - structs don't use ()
    char name[100];
    int emp_id;
    float salary;
};

void display(struct employee);  // Complete function declaration

void display(struct employee e){
    printf("Employee Name: %s\n", e.name);    // Add \n for better formatting
    printf("Employee ID: %d\n", e.emp_id);
    printf("Employee Salary: %.2f\n", e.salary);
}

int main(){
    struct employee e;
    int n;
    
    printf("Enter the size of the name: ");
    scanf("%d", &n);  // Add & operator for address
    
    printf("Enter the Name of the Employee: ");
    scanf("%99s", e.name);  // Limit input to prevent buffer overflow
    
    printf("Enter the Employee ID of the Employee: ");
    scanf("%d", &e.emp_id);  // Add & operator for address
    
    printf("Enter the Employee Salary: ");  // Missing salary input
    scanf("%f", &e.salary);  // Add & operator for address
    
    display(e);  // Call the display function
    
    return 0;
}
