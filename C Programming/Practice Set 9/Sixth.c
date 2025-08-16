#include<stdio.h>

typedef struct ComplexNo
{
    int i;
} cn;


int main(){

    cn c;
    printf("Enter the constant value of the Complex Number: ");
    scanf("%d", &c.i);

    printf("The complex number is: %di", c.i);
    

    return 0;
}