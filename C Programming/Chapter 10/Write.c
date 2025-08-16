#include<stdio.h>

int main(){

    FILE *ptr;
    ptr = fopen("eg2.txt", "w"); // This is how we write in a file but writing in a file has a problem. Like when we try to write a file then it erases all the existing data and then writes the new thing.

    int num = 123;
    fprintf(ptr, "%d", num);

    fclose(ptr);

    return 0;
}