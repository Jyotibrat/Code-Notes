// Write a program to count the occurrence of a given character in a string.

#include<stdio.h>
#include<string.h>

int count(char*, char);

int count(char* st, char c){
    int cnt = 0;
    for(int i = 0; i < strlen(st); i++){
        if (st[i] == c){
            cnt++;
        }
    }
    return cnt;
}
int main(){

    int n;
    printf("Enter the size of the string: ");
    scanf("%d", &n);
    char st[n];
    printf("Enter the string: ");
    scanf("%s", st);
    char ch;
    printf("Enter the character which you wants to: ");
    scanf(" %c", &ch);
    printf("Count: %d", count(st, ch));

    return 0;
}