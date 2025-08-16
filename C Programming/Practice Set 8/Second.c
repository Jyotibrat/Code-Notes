// Write your own version of strlen function from <string.h>

#include<stdio.h>

int main(){

    int n;
    printf("Enter the size of the string: ");
    scanf("%d", &n);
    char st[n];
    printf("Enter the string: ");
    scanf("%s", st);
    
    int i = 0;
    char c = st[i];
    while (c != '\0')
    {
        i++;
        c = st[i];
    }
    printf("The length of the string is: %d", i + 1);

    return 0;
}