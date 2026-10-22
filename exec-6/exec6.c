#include <stdio.h>

int main(void){
    //declaracao de variaveis
    int num;

    //pede um numero e guarda na variavel do tipo inteiro chamada "num"
    printf("Digite um numero: ");
    scanf("%d", &num);

    //imprime o sucessor, o numero e o seu antecessor
    printf("Sucessor: %d\nNumero: %d\nAntecessor: %d", num+1, num, num-1);

    return 0;
}