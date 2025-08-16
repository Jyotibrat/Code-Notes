#include<stdio.h>

struct Bank_Account
{
    char Name[100];
    char Account_Type[100];
    double Amount;
    int Account_No;
};

void display(struct Bank_Account[], int);

void display(struct Bank_Account Bank[], int n){
    for(int i = 0; i < n; i++){
        printf("\nName: %s", Bank[i].Name);
        printf("\nAccount Type: %s", Bank[i].Account_Type);
        printf("\nAmount: %lf", Bank[i].Amount);
        printf("\nAccount Number: %d", Bank[i].Account_No);
    }
}

int main(){

    struct Bank_Account Bank[100];
    int n;
    printf("Enter the number of Customers: ");
    scanf("%d", &n);
    
    printf("Enter the details of the Customers:\n");
    for(int i = 0; i < n; i++){
        printf("Enter the Name: ");
        scanf(" %s", Bank[i].Name);
        printf("Enter the Account Type: ");
        scanf(" %s", Bank[i].Account_Type);
        printf("Enter the Amount in the Bank: ");
        scanf("%lf", &Bank[i].Amount);
        printf("Enter the Account Number: ");
        scanf("%d", &Bank[i].Account_No);
    }

    display(Bank, n);

    return 0;
}