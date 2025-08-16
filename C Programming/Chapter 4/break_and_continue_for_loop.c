#include<stdio.h>

int main(){
    printf("---For Break statement---\n\n");
    for(int i = 0; i < 100; i++){
        if(i == 5){
            break;
        }
        printf("Printing: %d\n", i);
    }
    printf("\n---For Continue statement---\n\n");
    for(int i = 0; i < 5; i++){
        if(i == 2){
            continue;
        }
        printf("Printing: %d\n", i);
    }

    return 0;
}