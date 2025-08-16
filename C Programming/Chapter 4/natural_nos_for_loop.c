#include<stdio.h>

int main(){
    for(int i = 1; i < 11; i++){
        if(i == 1){
            printf("The %dst natural number is: %d\n", i, i);
        }else if(i == 2){
            printf("The %dnd natural number is: %d\n", i, i);
        }else if(i == 3){
            printf("The %drd natural number is: %d\n", i, i);
        }else{
            printf("The %dth natural number is: %d\n", i, i);
        }
    }

    return 0;
}