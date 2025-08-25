/*
1) Faça um algoritmo que receba dois números inteiros e imprima a soma desses dois números.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int v1, v2, s;

    printf("Insira o primeiro valor: ");
    scanf("%i", &v1);

    printf("Agora insira o segundo valor: ");
    scanf("%i", &v2);

    s = v1 + v2;

    printf("O resultado da soma de ambos números é: %i", s);
    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
