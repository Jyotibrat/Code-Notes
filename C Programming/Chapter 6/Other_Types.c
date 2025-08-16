#include<stdio.h>

int main(){

    char i = 'A';
    char* j = &i; // Variables of the value and the address storer shall have the same data type. 

    float k = 6.1;
    float* m = &k;
    printf("The address of i is: %p\n", j);
    printf("The address of j is: %p\n", &j);
    printf("The address of k is: %p\n", m);
    printf("The value of k is: %f", *(&k));

    return 0;
}