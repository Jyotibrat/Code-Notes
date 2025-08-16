#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){

    srand(time(0));
    int player, computer = rand() % 3;

    printf("Enter a number between 0 to 2\n\n0 for Rock\n1 for Scissors\n2 for Paper\n");
    scanf("%d", &player);

    if(player == 0 && computer == 0){
        printf("\nPlayer: %d\nComputer: %d\nNo one wins!", player, computer);
    }else if (player == 1 && computer == 1){
        printf("\nPlayer: %d\nComputer: %d\nNo one wins!", player, computer);
    }else if (player == 2 && computer == 2){
        printf("\nPlayer: %d\nComputer: %d\nNo one wins!", player, computer);
    }else if (player == 0 && computer == 1){
        printf("\nPlayer: %d\nComputer: %d\nPlayer wins!", player, computer);
    }else if (player == 0 && computer == 2){
        printf("\nPlayer: %d\nComputer: %d\nComputer wins!", player, computer);
    }else if (player == 1 && computer == 0){
        printf("\nPlayer: %d\nComputer: %d\nComputer wins!", player, computer);
    }else if (player == 1 && computer == 2){
        printf("\nPlayer: %d\nComputer: %d\nPlayer wins!", player, computer);
    }else if (player == 2 && computer == 0){
        printf("\nPlayer: %d\nComputer: %d\nPlayer wins!", player, computer);
    }else if (player == 2 && computer == 1){
        printf("\nPlayer: %d\nComputer: %d\nComputer wins!", player, computer);
    }
    
    return 0;
}