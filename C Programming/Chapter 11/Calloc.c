#include<stdio.h>
#include<stdlib.h>

int main(){

    float *ptr;
    int n;
    printf("Enter the Size of the array: ");
    scanf("%d", &n);
    ptr = (float*) calloc(n, sizeof(float));

    printf("Enter the numbers in the array: \n");
    
    for(int i = 0; i < n; i++){
        printf("Enter the number at the index %d: ", i);
        scanf(" %f", &ptr[i]);
    }

    for(int i = 0; i < n; i++){
        printf("\nNumber at the index %d is: %f", i, ptr[i]);
    }

    free(ptr);
    
    return 0;
}