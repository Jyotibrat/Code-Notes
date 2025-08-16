// Create a three–dimensional array and print the address of its elements in increasing order.

#include<stdio.h>

int main(){

    int n1, n2, n3;
    printf("Enter the size 1 of the array: ");
    scanf("%d", &n1);
    printf("Enter the size 2 of the array: ");
    scanf("%d", &n2);
    printf("Enter the size 3 of the array: ");
    scanf("%d", &n3);

    int array[n1][n2][n3];
    
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            for(int k = 0; k < n3; k++){
                scanf("%d", &array[i][j][k]);
            }
        }
    }

    int* ptr_array = &array[0][0][0];
    printf("Printing the address of the elements in the increasing order: ");
    for(int i = 0; i < (n1 * n2 * n3); i++){
        printf("%p, ", ptr_array);
        ptr_array += 1;
    }

    return 0;
}