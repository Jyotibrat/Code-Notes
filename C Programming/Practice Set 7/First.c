// Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.

#include<stdio.h>

int main(){

    int array[10];
    printf("Enter the numbers in the array: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }

    int* ptr_array= array;
    printf("The 3rd element in the array is: %d\n", *(ptr_array+2));
    printf("The 1st element in the array is: %d", *ptr_array);

    return 0;
}