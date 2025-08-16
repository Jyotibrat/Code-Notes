#include<stdio.h>

int main(){

    int array_1[2] = {1, 2}; // Here we explicitly decide the size of the array.
    int array_2[] = {3, 4}; // Here the size of the array is decide implicitly.

    printf("The value of first element of array 1 is: %d\n", array_1[0]);
    printf("The value of second element of array 1 is: %d\n", array_1[1]);

    printf("The value of the first element of array 2 is: %d\n", array_2[0]);
    printf("The value of second element of array 2 is: %d\n", array_2[1]);

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int array_3[n];
    printf("\nEnter the numbers in the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &array_3[i]);
    }
    printf("\n");
    printf("Printing the values of array 3: ");
    for(int i = 0; i < n; i++){
        printf("%d, ",array_3[i]);
    }
    return 0;
}