#include <stdio.h>

int main(void){
    //declaraçao de variaveis
    int n1, n2;

    //pede um valor e guarda-o numa variavel do tipo inteiro chamada "n1"
    printf("Digite um valor: ");
    scanf("%d", &n1);

    //pede outro valor e guarda-o numa variavel do tipo inteiro chamada "n2"
    printf("Digite outro valor: ");
    scanf("%d", &n2);

    //imprime n1, n2 e a soma dos dois
    printf("A soma entre %d e %d: %d", n1, n2, n1+n2);

    return 0;
}