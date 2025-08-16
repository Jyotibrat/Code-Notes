#include<stdio.h>

int sum(int, int);
int change(int*);

int sum(int a, int b){ // This is call by value which means we pass the copy of the original variable and not the addresses.
    return a + b;
}

int change(int* a){ // This is call by reference which means we pass the addresses of the original variable and not the copy of it.
    *a = 6;
    return *a;
}

int main(){

    int x = 1, y = 6;

    printf("The value of %d and %d is: %d\n", x, y, sum(x, y));
    printf("The value of x is: %d", change(&x));

    return 0;
}