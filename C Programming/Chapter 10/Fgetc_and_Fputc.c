#include<stdio.h>

int main(){

    FILE *ptr;
    ptr = fopen("eg.txt", "r");
    char c = fgetc(ptr); // This function reads the first character of the file.
    printf("The first character in the File eg.txt is: %c", c);

    fclose(ptr);

    FILE *ptr_2;
    ptr_2 = fopen("eg2.txt", "w");
    fputc('c', ptr); // This function writes to the file.
    fclose(ptr_2);

    return 0;
}