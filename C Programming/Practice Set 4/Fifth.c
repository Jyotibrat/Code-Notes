#include<stdio.h>

int main(){
    int n, j = 1, sumf = 0, sumd = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sumf += i;
    }

    printf("The sum of natural numbers till %d using for loop is: %d\n", n, sumf);

    do{
        sumd += j;
        j++;
    }while(j <= n);

    printf("The sum of natural numbers till %d using do while loop is: %d", n, sumd);

    return 0;
}