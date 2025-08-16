#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr = (int*) calloc (10, sizeof(int));

    for(int i = 0; i < 10; i++){
        ptr[i] = (i + 1) * 7;
    }

    ptr = (int*) realloc(ptr, 15 * sizeof(int));

    for (int i = 10; i < 15; i++)
    {
        ptr[i] = (i + 1) * 7;
    }

    printf("Printing the multiplication table for 7: \n");
    for(int i = 0; i < 15; i++){
        printf("%d x %d = %d\n", 7, i + 1, ptr[i]);
    }
    
    free(ptr);

    return 0;
}