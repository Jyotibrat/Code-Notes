#include<stdio.h>

int main(){

    char st[] = {'a', 'b', 'c', '\0'}; // string is basically an array of characters so we need to add a null character '\0' at the end when we declare it explicitly but when we don't add it in other type of declaration it gets automatically added as implicitly
    for(int i = 0; i < 4; i++){
        printf("The character at %d is: %c\n", i, st[i]);
    }

    printf("%s\n", st);
    printf("%s\n", &st); // &st and st are same as both redirects to the address where the value is stored as it is an array.

    char st2[4];
    scanf("%s", st2); //  This is how we take a string as an input, we need to determine the size of the string before entering it eg: st2[4].
    printf("%s", st2);
    
    return 0;
}