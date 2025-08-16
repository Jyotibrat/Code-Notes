#include<stdio.h>

// function protoype
int sum(int, int);

// function definition
int sum(int x, int y){
    return x+y;
}

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    printf("The sum of %d and %d is: %d", a, b, sum(a, b));

    return 0;
}