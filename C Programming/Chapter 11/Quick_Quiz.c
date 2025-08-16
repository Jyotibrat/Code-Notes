#include<stdio.h>
#include<stdlib.h>

int main(){

    float *ptr; // The pointer will be of that data type which data type we want to store in the array.
    ptr = (float*) malloc(5 * sizeof(float));

    printf("Enter the numbers: \n");
    for(int i = 0; i < 5; i++){
        printf("Enter the number at the index %d: ", i);
        scanf("%f", &ptr[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("\nThe number at index %d is: %f", i, ptr[i]); // %2f is used to display 2 deciaml values after the point.
    }

    free(ptr);
    
    return 0;
}