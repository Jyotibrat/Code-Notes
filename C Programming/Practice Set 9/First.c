#include<stdio.h>
struct vector{
    int i;
    int j;
} vec;

int main(){

    printf("Enter the value of Vector i: ");
    scanf("%d", &vec.i);
    printf("Enter the value of Vector j: ");
    scanf("%d", &vec.j);
    
    printf("Vectors are: %di + %dj.", vec.i, vec.j);

    return 0;
}