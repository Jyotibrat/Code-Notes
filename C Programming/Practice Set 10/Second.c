#include<stdio.h>

int main(){

    FILE *ptr;
    ptr = fopen("Second.txt", "w");

    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for(int i = 1; i <= 10; i++){
        fprintf(ptr, "%d x %d = %d\n", n, i, (n * i));
    }

    fclose(ptr);

    return 0;
}