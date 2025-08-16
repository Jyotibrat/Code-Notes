#include<stdio.h>

void GM();
void GA();
void GN();

void GM(){
    printf("Good Morning\n\n");
}

void GA(){
    printf("Good Afternoon\n\n");
}

void GN(){
    printf("Good Night\n\n");
}

int main(){
    GM();
    GA();
    GN();

    return 0;
}