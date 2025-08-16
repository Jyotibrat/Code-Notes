// Write a program to create an array of 10 integers and store multiplication table of 5 in it.

#include<stdio.h>

int main(){

    int array[10], j = 1;

    for(int i = 0; i < 10; i++){
        array[i] = (j) * 5;
        j++;
    }
    printf("The elements in the array are: ");
    for(int i = 0; i < 10; i++){
        printf("%d, ", array[i]);
    }

    return 0;
}
