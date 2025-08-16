// Write a program to encrypt a string by adding 1 to the ascii value of its characters

#include<stdio.h>
#include<string.h>

int main(){

    int n;
    printf("Enter the size of the string: ");
    scanf("%d", &n);
    char st[n];
    printf("Enter the string: ");
    scanf("%s", st);
    
    for(int i = 0; i < strlen(st); i++){
        st[i] = st[i] + 1;
    }

    printf("Encrypted String: %s", st);

    return 0;
}