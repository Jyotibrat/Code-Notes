#include<stdio.h>

int main(){

    FILE *ptr;
    ptr = fopen("eg.txt", "r");

    int num;
    fscanf(ptr, "%d", &num); // This will point to the first number which exists in the file
    printf("The value of first integer is: %d", num);

    fscanf(ptr, "%d", &num); // This will point to the next number after the first number which exists in the file which is 24 in our case. 
    printf("\nThe value of second integer is: %d", num);

    fclose(ptr);
    
    return 0;
}