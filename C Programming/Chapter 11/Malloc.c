#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int array[n]; // In this way also we can declare a dynamic array.

    array[0] = 1;
    printf("The value of first number in the array is: %d", array[0]);

    int *ptr;
    ptr = (int*) malloc(n * sizeof(int)); // This is how we declare a dynamic array. We have written 'int*' at the start because malloc alone returns NULL pointer so we need to explicitly tell malloc to return the first address of the array to point to the array.

    ptr[0] = 1;
    printf("\nThe value of first number in the array is: %d", ptr[0]);

    free(ptr);
    
    return 0;
}