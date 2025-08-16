#include<stdio.h>

int main(){
    for(int i = 10; i; i--){ // here the condition check is that i is not equal to zero and we can write it in 2 ways which is i != 0 and just writing i.
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