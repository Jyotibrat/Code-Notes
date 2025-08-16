// Write a program containing a function which reverses the array passed to it.

#include<stdio.h>

void reverse(int*, int);

void reverse(int* a, int n){
    int m = n - 1;
    int temp;
    for(int i = 0; i < n/2; i++){
        temp = a[i];
        a[i] = a[m - i];
        a[m - i] = temp;
    }
}

int main(){

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    reverse(array, n);

    printf("The elements in the array after reversing is: ");
    for(int i = 0; i < n; i++){
        printf("%d, ", array[i]);
    }

    return 0;
}