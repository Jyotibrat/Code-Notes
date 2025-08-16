// Write a program containing functions which counts the number of positive integers in an array

#include<stdio.h>

int count(int, int*);

int count(int n, int* array){
    int c = 0;
    for(int i = 0; i < n; i++){
        if(array[i] > 0){
            c++;
        }
    }
    return c;
}

int main(){

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int array[n];

    printf("Enter the elements in the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    printf("The count of positive integers in the array is: %d", count(n, array));

    return 0;
}