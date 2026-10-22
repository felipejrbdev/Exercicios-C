#include <stdio.h>

int main(void){
    char nome[50];

    printf("Informe seu nome: ");
    scanf("%49[^\n]", nome);

    printf("Ola %s! Prazer te conhecer!", nome);

    return 0;
}