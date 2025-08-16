#include<stdio.h>

struct ComplexNo
{
    int i;
} cn;


int main(){

    printf("Enter the constant value of the Complex Number: ");
    scanf("%d", &cn.i);

    printf("The complex number is: %di", cn.i);
    

    return 0;
}