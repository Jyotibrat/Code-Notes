#include<stdio.h>

int main(){

    FILE *ptr;
    ptr = fopen("First.txt", "r");

    int n1 = fgetc(ptr); // This gives the ASCII value if the character is a number.
    int n1 = fgetc(ptr) - '0'; // This gives the number and not the ASCII Value.
    int n2 = fgetc(ptr) - '0';
    int n3 = fgetc(ptr) - '0';

    printf("\nFirst Number: %d", n1);
    printf("\nSecond Number: %d", n2);
    printf("\nThird Number: %d", n3);

    fclose(ptr);
    
    return 0;
}