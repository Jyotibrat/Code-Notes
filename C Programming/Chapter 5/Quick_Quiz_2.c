#include<stdio.h>
#include<math.h>

double area(int);

double area(int a){
    return pow(a, 2);
}

int main(){

    int n;
    scanf("%d", &n);

    printf("The area of the square is: %f", area(n));

    return 0;
}