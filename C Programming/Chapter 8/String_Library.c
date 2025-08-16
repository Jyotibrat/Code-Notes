#include<stdio.h>
#include<string.h>

int main(){

    char st[] = "Bindupautra";

    printf("The length of the string is: %d\n", strlen(st)); // strlen calculates the number of characters without the null character.

    char target[30];
    strcpy(target, st);

    printf("The value of Target is: %s\n", target);
    printf("The value of Source is: %s\n", st);

    char st_2[] = " Jyotibrat"; // In concatenation we need to add a space as the space doesn't get attached automatically.
    strcat(st, st_2); // It concatenates the 2 strings are puts it in the first variable which is in this case is: st. 

    printf("The value of concatenation of string %s and %s is: %s\n", target, st_2, st);

    char st_3[] = "Bindupautra Jyotibrat";
    int c = strcmp(st, st_3); // It compares the ASCII characters of the first letter if the first letters are same then moves to the next letter.

    printf("The result of %s and %s to be matched is: %d", st, st_3, c);
    
    return 0;
}