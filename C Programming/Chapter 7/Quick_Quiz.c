#include<stdio.h>

void display(int, int n2, int[][n2]); // For single dimensional array we can write like this int* i.

void display(int n1, int n2, int a[][n2]){
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            printf("%d, ", a[i][j]);
        }
    }
}

int main(){

    int n1, n2;
    printf("Enter the size 1 of the 2d array:");
    scanf("%d", &n1);
    printf("\nEnter the size 2 of the 2d array:");
    scanf("%d", &n2);

    int array[n1][n2];

    printf("\nEnter the contents of the array: ");
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            scanf("%d", &array[i][j]);
        }
    }

    printf("\n");

    display(n1, n2, array);

    return 0;
}