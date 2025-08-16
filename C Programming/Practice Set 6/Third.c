// Write a program to change the value of a variable to ten times of its current value.

#include<stdio.h>

int change(int*);

int change(int* i){
    int i_value = *i;
    return 10*i_value;
}

int main(){

    int i = 1;

    printf("The valuee of i 10 times is: %d", change(&i));

    return 0;
}