// Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively.

#include<stdio.h>

int main(){

    int array[3][10];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 10; j++){
            if (i == 0)
                array[i][j] = (j + 1) * 2;
            else if (i == 1)
                array[i][j] = (j + 1) * 7;
            else
                array[i][j] = (j + 1) * 9;
        }
    }

    printf("Printing the array: ");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 10; j++){
            printf("The value of [%d][%d] is: %d\n", i, j, array[i][j]);
        }
    }
    return 0;
}