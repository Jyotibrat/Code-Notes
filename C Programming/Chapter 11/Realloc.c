#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int *ptr = (int*) malloc(n * sizeof(int));

    printf("The size of the array is: %d", n * sizeof(ptr));

    printf("\nEnter the new size of the array: ");
    scanf("%d", &n);

    ptr = (int*) realloc(ptr, n * sizeof(int));

    printf("The size of the array is: %d", n * sizeof(ptr));

    free(ptr);

    return 0;
}