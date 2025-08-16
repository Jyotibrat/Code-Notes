#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr = (int*) calloc(6, sizeof(int));

    printf("Enter the numbers: \n");
    for(int i = 0; i < 6; i++){
        printf("Enter the number at index %d: ", i);
        scanf("%d", &ptr[i]);
    }

    for(int i = 0; i < 6; i++){
        printf("\nNumber at index %d is: %d", i, ptr[i]);
    }

    free(ptr);

    return 0;
}