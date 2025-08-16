#include<stdio.h>

int main(){

    int i = 10;
    int* j = &i;
    printf("The address of i is: %p\n", j); // To Display pointers we use '%p'.
    printf("The address of i in integer is: %u\n", j); // We can use '%u' to display the integer value for the address as addresses are generally are displayed in hexadecimal but by using '%u' we can display it in integer value. '%u' means unsigned integer.
    printf("The address of j is: %p\n", &j); // Normally '%p' is used to display pointers.
    printf("The value of j is: %d\n", *(&i)); // This will print the value of i.
    printf("The value of j is: %p\n", &(*(&j))); // This will print the address of j.

    return 0;
}