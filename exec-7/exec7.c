#include <stdio.h>
#include <math.h>

int main(void){
    //declaracao de variaveis
    float num;

    //pede um numero e guarda numa variavel do tipo float chamada "num"
    printf("Digite um numero real: ");
    scanf("%f", &num);

    //imprime o dobro de num e a terca parte
    printf("O dobro de %.2f: %.2f\n", num, num*2);
    printf("A terca parte de %.2f: %.2f", num, num/3);

    return 0;
}