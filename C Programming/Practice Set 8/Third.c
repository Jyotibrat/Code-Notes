// Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position for slice.

#include<stdio.h>
#include<string.h>

char* slice(char* st, int, int);

char* slice(char* st, int m, int n){
    char* ptr_1 = &st[m];
    char* ptr_2 = &st[n];
    st = ptr_1;
    st[n] = '\0';
    return st;
}

int main(){

    int n, a, b;
    printf("Enter the size of the string: ");
    scanf("%d", &n);
    char st[n];
    printf("Enter the string: ");
    scanf("%s", st);
    printf("Enter the first number for slicing: ");
    scanf("%d", &a);
    printf("Enter the second number for slicing: ");
    scanf("%d", &b);
    char st_c[n];
    strcpy(st_c, st);
    printf("The word %s after slicing is: %s", st_c, slice(st, a, b));


    return 0;
}