// Write a program to print the address of a variable. Use this address to get the value of the variable.
#include<stdio.h>

int main(){
    
    int i = 1;

    printf("The address of i is: %p\n", &i);

    int* i_ptr = &i;

    printf("The value of i is: %d\n", *i_ptr);

    return 0;
}