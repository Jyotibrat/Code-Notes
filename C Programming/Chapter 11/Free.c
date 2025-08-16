#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *ptr = (int*) malloc(n * sizeof(int));

    ptr[0] = 1;

    free(ptr); // Here we free the dynamic array therefore it does not exits anymore so the line of code below will give a garbage value.

    printf("The number at index 0 is: %d\n", ptr[0]);

    int no;
    printf("Enter the size of the array: ");
    scanf("%d", &no);

    int *ptr_2 = (int*) calloc(no, sizeof(int)); // The difference between malloc and calloc is that when we declare a dynamic array using calloc then the default value is 0 for all the addresses but for malloc it is a garbage value.

    ptr_2[0] = 1;

    printf("The number at index 0 is: %d\n", ptr_2[1]); // Showing the default value of an addresses in calloc is '0'.

    free(ptr_2); // Here we free the dynamic array therefore it does not exits anymore so the line of code below will give a garbage value.

    printf("The number at index 0 is: %d", ptr_2[0]);

    return 0;
}