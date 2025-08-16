// Write your own version of strcpy function from <string.h>

#include<stdio.h>

void strcopy(char* , char* );
int strlen(char*);

int strlen(char* st){
    int i = 0;
    char c = st[i];
    while (c != '\0')
    {
        i++;
        c = st[i];
    }
    return i + 1;
}

void strcopy(char* st_c, char* st){
    for(int i = 0; i < strlen(st); i++){
        st_c[i] = st[i];
    }
    st_c[strlen(st)] ='\0';
}

int main(){

    int n;
    printf("Enter the size of the string: ");
    scanf("%d", &n);
    char st[n];
    printf("Enter the string: ");
    scanf("%s", st);
    char st_c[n];
    strcopy(st_c, st);
    printf("The copied string is: %s", st_c);

    return 0;
}