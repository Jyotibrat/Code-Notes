// Repeat problem 3 for a general input provided by the user using scanf.

#include<stdio.h>

int main(){

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int array[n];

    printf("Enter the elements in the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    printf("\nThe elements in the array are: ");
    for(int i = 0; i < n; i++){
        array[i] = array[i] * 5;
        printf("%d, ", array[i]);
    }

    return 0;
}