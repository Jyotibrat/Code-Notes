#include<stdio.h>

double convert(double);

double convert(double c){
    return ((c * 1.8) + 32);
}

int main(){

    double n;
    printf("Enter the Temperature in Celsius: ");
    scanf("%lf", &n);

    printf("The Temperature of %lf in Fahrenheit is: %lf", n, convert(n));

    return 0;
}