#include <stdio.h>

int main(void){
    //declaraçao de variaveis
    char nome[50];
    float sal;

    //pede um nome e guarda-o numa variavel do tipo char chamada "nome"
    printf("Digite o nome do funcionario: ");
    scanf("%49[^\n]", nome);

    //pede o salario e guarda-o numa variavel do tipo float chamada "sal"
    printf("Digite o salario do funcionario: ");
    scanf("%f", &sal);

    //imprime o nome e o salario dentro de uma frase
    printf("O funcionario %s tem um salario de R$%.2f!", nome, sal);

    return 0;
}