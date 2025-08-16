#include<stdio.h>

struct Vector{
    int i;
    int j;
};

struct Vector sumVector(struct Vector v1, struct Vector v2){
    struct Vector v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}

int main(){

    struct Vector v1, v2, v3;
    printf("Enter the vector i for the first vector: ");
    scanf("%d", &v1.i);
    printf("Enter the vector j for the first vector: ");
    scanf("%d", &v1.j);
    printf("Enter the vector i for the second vector: ");
    scanf("%d", &v2.i);
    printf("Enter the vector j for the second vector: ");
    scanf("%d", &v2.j);

    v3 = sumVector(v1, v2);

    printf("The sum of vector1 and vector2 is: %di + %dj", v3.i, v3.j);
    
    return 0;
}