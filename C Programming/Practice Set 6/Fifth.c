// Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().

#include<stdio.h>

int sum(int*, int*);
double average(int*, int*);

double average(int* a, int* b){
    int sum = *a + *b;
    return (sum / 2.0);
}

int sum(int* a, int* b){
    return *a + *b;
}

int main(){
    
    int a = 1, b = 2;

    printf("The sum of %d and %d is: %d\n", a, b, sum(&a, &b));

    printf("The average of %d and %d is: %f", a, b, average(&a, &b));
    
    return 0;
}