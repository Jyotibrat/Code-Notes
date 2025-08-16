#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr = (int*) calloc (5, sizeof(int));
    printf("Enter the numbers in the array: \n");
    for(int i = 0; i < 5; i++){
        printf("Enter the number at index %d: ", i);
        scanf("%d", &ptr[i]);
    }

    ptr = (int*) realloc (ptr, 10 * sizeof(int));

    printf("Enter the numbers at index 5 ot 9: \n");
    for(int i = 5; i < 10; i++){
        printf("Enter the number at index %d: ", i);
        scanf("%d", &ptr[i]);
    }

    printf("Printing the numbers in the array: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("\n Number at index %d is: %d", i, ptr[i]);
    }
    
    free(ptr);

    return 0;
}