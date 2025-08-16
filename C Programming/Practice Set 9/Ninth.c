#include<stdio.h>

typedef struct Date{
    int Day;
    int Month;
    int Year;
} D;

void Compare(struct Date[]);

void Compare(struct Date D[]){
    if(D[0].Day == D[1].Day && D[0].Month == D[1].Month && D[0].Year == D[1].Year){
        printf("The dates are matching.");
    }else{
        printf("The dates do not match.");
    }
}

int main(){

    D Dte[100];

    printf("Enter the Date 1: ");
    printf("\nEnter the Day: ");
    scanf("%d", &Dte->Day);
    printf("Enter the Month: ");
    scanf("%d", &Dte->Month);
    printf("Enter the Year: ");
    scanf("%d", &Dte->Year);
    
    printf("Enter the Date 2: ");
    printf("\nEnter the Day: ");
    scanf("%d", &Dte[1].Day);
    printf("Enter the Month: ");
    scanf("%d", &Dte[1].Month);
    printf("Enter the Year: ");
    scanf("%d", &Dte[1].Year);

    Compare(Dte);

    return 0;
}