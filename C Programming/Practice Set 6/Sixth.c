// Write a program to print the value of a variable i by using “pointer to pointer” type of variable.

#include<stdio.h>

int main(){

    int i = 1;
    int* j = &i;
    int** k = &j;
    
    printf("Printing the value of i using pointer to pointer type is: %d", **(k));

    return 0;
}