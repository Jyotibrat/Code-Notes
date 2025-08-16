#include<stdio.h>

int main(){

    int array_1[3] = {1, 2, 3};

    int* j = &array_1[0];
    int* k = array_1; // It does have the same functionality as the above line.

    printf("The results of array 1 is: ");
    for(int i = 0; i < 4; i++){
        printf("%d, ",*k);
        k++; // This means the pointer now points to the next memory location and in that location the next integer is stored.
    }

    return 0;
}