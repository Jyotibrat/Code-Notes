// Write a function and pass the value by reference

#include<stdio.h>

void display(int*);

void display(int* i){
    printf("The value of i is: %d", *i);
}
int main(){

    int i = 1;

    display(&i);

    return 0;
}