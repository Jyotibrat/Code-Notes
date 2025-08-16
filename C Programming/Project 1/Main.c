#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    srand(time(0));
    
    int random_no = (rand() % 100) + 1;
    
    int n, attempts = 0;
    
    for(;;){
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("\n");
        if (n == random_no){
            printf("The Game has ended.\n");
            attempts++;
            printf("The number of Attempts is: %d", attempts);
            break;
        }else{
            attempts++;
            if(random_no > n){
                printf("Higher\n");
            }else
            {
                printf("Lower\n");
            }
            
        }
    }

    return 0;
}