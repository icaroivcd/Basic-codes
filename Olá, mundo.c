#include <stdio.h>
int main(){
    char nome[50];

    scanf("%[^\n]s",nome);
    printf("Ola, %s. Seja bem-vindo(a).",nome);
    return 0;
}

