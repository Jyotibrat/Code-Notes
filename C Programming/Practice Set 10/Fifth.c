#include<stdio.h>

int main(){

    FILE *ptr_r, *ptr_w;
    ptr_r = fopen("Fifth.txt", "r");
    
    int n;
    fscanf(ptr_r, "%d", &n);
    ptr_w = fopen("Fifth.txt", "w");
    fprintf(ptr_w, "%d", (2 * n));

    fclose(ptr_r);
    fclose(ptr_w);
    
    return 0;
}