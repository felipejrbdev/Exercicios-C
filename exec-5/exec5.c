#include <stdio.h>

int main(void){
    //declaracao de variaveis
    float n1, n2, media;

    //pede primeira nota e guarda numa variavel do tipo real chamada "n1"
    printf("Digite sua primeira nota: ");
    scanf("%f", &n1);

    //pede segunda nota e guarda numa variavel do tipo real chamada "n2"
    printf("Digite sua segunda nota: ");
    scanf("%f", &n2);

    //criacao da media entre os dois valores
    media = (n1 + n2) / 2;

    //imprime n1, n2 e a media numa frase
    printf("A media entre %.2f e %.2f: %.2f", n1, n2, media);

    return 0;
}