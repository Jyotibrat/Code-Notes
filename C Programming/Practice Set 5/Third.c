#include<stdio.h>

double f_o_a(double);

double f_o_a(double m){
    return m*9.8;
}

int main(){

    double m;
    printf("Enter the mass: ");
    scanf("%lf", &m);

    printf("The Force of Attraction on mass %lf is: %lf", m, f_o_a(m));

    return 0;
}