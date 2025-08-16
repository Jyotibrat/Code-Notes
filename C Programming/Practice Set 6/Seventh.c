// Try problem 3 using call by value and verify that it does not change the value of the said variable.

#include<stdio.h>

void change(int, int);

void change(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    int a = 1,b = 2;
    change(a, b);
    printf("The value of a and b is %d and %d respectively.", a, b);


    return 0;
}