// Write a program to take string as an input from the user using %c and %s confirm that the strings are equal

#include<stdio.h>
#include<string.h>

int main(){

    int n;
    printf("Enter the size of the string: ");
    scanf("%d", &n);
    char st_1[n], st_2[n];
    while(getchar() != '\n');
    printf("\nEnter the characters of the string: ");
    for(int i = 0; i < n; i++){
        scanf("%c", &st_1[i]);
        fflush(stdin);
    }

    st_1[n] = '\0';
    
    printf("\nEnter the same string again but not in letters: ");
    scanf("%s", st_2);
    printf("\nChecking whether the strings are same or not: %d", strcmp(st_1, st_2));

    return 0;
}