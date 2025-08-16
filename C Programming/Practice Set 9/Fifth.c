#include<stdio.h>

struct ComplexNo
{
    int i;
};

void display(struct ComplexNo CN[], int);


void display(struct ComplexNo CN[100], int n){
    for(int i = 0; i < n; i++){
        printf("\nThe value of complex number %d is: %di.\n", (i + 1), CN[i].i);
    }
}

int main(){

    struct ComplexNo CN[100];

    int n;
    printf("Enter the number of complex numbers: ");
    scanf("%d", &n);

    printf("Enter the complex numbers: \n");
    for(int i = 0; i < n; i++){
        printf("Enter the %d complex number: ", (i + 1));
        scanf("%d", &CN[i].i);
    }

    display(CN, n);

    return 0;
}