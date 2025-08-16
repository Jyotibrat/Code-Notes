#include<stdio.h>

int main(){

    FILE *ptr;
    ptr = fopen("eg2.txt", "a"); // This is how we append in a file. This means that we do not erase the existing data in the file rather we append the new data with the existing data in the file.

    int num = 123;
    fprintf(ptr, "%d", num);

    fclose(ptr);

    return 0;
}