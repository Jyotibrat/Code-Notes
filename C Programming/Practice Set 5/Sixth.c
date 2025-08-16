#include<stdio.h>

void pattern(int);

void pattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < (2 * i); j++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){

    int n;
    printf("Enter the number till which you want to see the pattern: ");
    scanf("%d", &n);

    printf("The Pattern is:\n");
    pattern(n);

    return 0;
}