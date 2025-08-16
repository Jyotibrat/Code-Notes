#include<stdio.h>

void swap_call_by_value(int, int);
void swap_call_by_reference(int*, int*);

void swap_call_by_reference(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_call_by_value(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    int a = 1, b = 6;
    swap_call_by_value(a, b);
    printf("The value of a and b using call by value is: %d, %d\n", a, b); // This is the value after call by value and in call by value the copies of the original value are passed so the swap is done in the copied value and not in the original value.
    swap_call_by_reference(&a, &b);
    printf("The value of a and b using call by reference is: %d, %d\n", a, b); // This is the value after call by reference and in call by reference we pass the address of the original variable so using those addresses we swap the variables so it affects the original variables.

    return 0;
}