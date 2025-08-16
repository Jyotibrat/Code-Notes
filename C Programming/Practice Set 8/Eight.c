// Write a program to check whether a given character is present in a string or not.

#include<stdio.h>
#include<string.h>

int main(){
    
    int n, flag = 0;
    printf("Enter the size of the string: ");
    scanf("%d", &n);
    char st[n];
    printf("Enter the string: ");
    scanf("%s", st);
    char ch;
    printf("Enter the character you want to search: ");
    scanf(" %c", &ch);

    for(int i = 0; i < strlen(st); i++){
        if (st[i] == ch){
            printf("The character is present.");
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("The entered string is not present.");
    }

    return 0;
}