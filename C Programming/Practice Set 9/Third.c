#include<stdio.h>

struct Vector
{
    int i;
    int j;
};

int main(){

    struct Vector v1;
    struct Vector *ptr;
    
    ptr = &v1;

    printf("enter the value of i: ");
    scanf("%d", &v1.i);
    printf("enter the value of j: ");
    scanf("%d", &v1.j);

    printf("the value of vector is: %di + %dj.", ptr->i, ptr->j); // This is how we can use pointers to display values stored in the addresses. This is another method like we can use it rather using the '*' method.

    return 0;
}