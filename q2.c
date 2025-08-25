/*
2) Faça um algoritmo que receba dois números reais, calcule e imprima a subtração do primeiro número pelo segundo.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float v1, v2, s;

    printf("Insira o primeiro valor: ");
    scanf("%f", &v1);

    printf("Agora insira o segundo valor: ");
    scanf("%f", &v2);

    s = v1 + v2;

    printf("O resultado da soma de ambos números é: %.1f", s);
    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
