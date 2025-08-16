#include<stdio.h>

int main(){
    int i = 0;
    do{
        if(i == 1) break;
        printf("i = %d\n", i);
        i++;
    }while(i < 5);
    
    int n = 0;
    do{
        if(n == 2) break;
        printf("n = %d\n", n);
        n++;
    }while(n < 5);

    int x = 0;
    do{
        if(x == 3) break;
        printf("x = %d\n", x);
        x++;
    }while(x < 5);

    return 0;
}