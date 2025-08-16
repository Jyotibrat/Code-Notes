// Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to a function and print its address. Are these addresses same? Why?

#include<stdio.h>

void address(int*);

void address(int* i){
    printf("The address of i is: %p", i);
}

int main(){

    int i = 1;
    int* i_ptr = &i;

    printf("The address of i is: %p\n", i_ptr);

    address(i_ptr);

    return 0;
}