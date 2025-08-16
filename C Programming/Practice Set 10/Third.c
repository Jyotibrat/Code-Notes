#include<stdio.h>

int main(){

    FILE *ptr_1, *ptr_2;
    ptr_1 = fopen("Third_1.txt", "r");
    ptr_2 = fopen("Third_2.txt", "w");

    while (1)
    {
        char ch = fgetc(ptr_1);
        if(ch == EOF ){
            break;
        }
        fputc(ch, ptr_2);
    }
    
    rewind(ptr_1); // This resets the pointer to the starting character for the file.

    while (1)
    {
        char ch1 = fgetc(ptr_1);
        if(ch1 == EOF ){
            break;
        }
        fputc(ch1, ptr_2);
    }

    fclose(ptr_1);
    fclose(ptr_2);
    
    return 0;
}