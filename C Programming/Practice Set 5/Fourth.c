#include<stdio.h>

int fibonacci(int);

int fibonacci(int n){
    if(n == 1 || n == 2){
        return n - 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){

    int n;
    printf("Enter the place in the fibonacci series whose number you want to see: ");
    scanf("%d", &n);

    printf("%d", fibonacci(n));

    return 0;
}
