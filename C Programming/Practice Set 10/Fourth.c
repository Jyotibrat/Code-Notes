#include<stdio.h>

struct Employee{
    char Name[100];
    double Salary;
};

int main(){

    FILE *ptr;
    ptr = fopen("Fourth.txt", "w");
    
    int no;

    printf("Enter the number of employees: ");
    scanf("%d", &no);
    
    struct Employee Emp[no];
    
    printf("Enter the details of employees: \n");
    
    for(int i = 0; i < no; i++){
    
        printf("Enter the name: ");
        scanf(" %s", Emp[i].Name);
        
        printf("Enter the Salary: ");
        scanf("%lf", &Emp[i].Salary);

        fprintf(ptr, "%s, %lf\n", Emp[i].Name, Emp[i].Salary);
    }

    fclose(ptr);
    
    return 0;
}