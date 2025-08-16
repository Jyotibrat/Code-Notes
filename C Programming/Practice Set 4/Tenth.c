#include<stdio.h>

int main(){
    int n, count1 = 0, count2 = 0, j = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count1++;
        }
        
    }
    
    if (count1 > 2){
        printf("%d is not a prime number.\n", n);
    }else
    {
        printf("%d is a prime number.\n", n);
    }

    do{
        if(n % j == 0){
            count2++;
        }
        j++;
    }while(j < n);
    
    if (count2 > 2){
        printf("%d is not a prime number.\n", n);
    }else
    {
        printf("%d is a prime number.\n", n);
    }

    return 0;
}