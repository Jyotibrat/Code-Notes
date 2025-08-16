#include<stdio.h>

int main(){
    int n, i = 1, sum = 0;
    scanf("%d", &n);

    while(i <= n){
        sum += i;
        i++;
    }
    printf("The sum of natural numbers till %d", sum);

    return 0;
}