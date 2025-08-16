#include<stdio.h>

double average(int, int, int);

double average(int a, int b, int c){
    return ((a + b + c) / 3);
}

int main(){

    int a, b, c;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);

    printf("The average of 3 numbers is: %f", average(a, b, c));

    return 0;
}