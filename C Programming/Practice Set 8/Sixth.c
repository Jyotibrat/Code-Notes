// Write a program to decrypt the string encrypted using encrypt function in problem 6.

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
        st[i] = st[i] - 1;
    }

    printf("Decrypted String: %s", st);

    return 0;
}