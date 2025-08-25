/*
7) Faça um algoritmo que receba dois números, calcule e imprima um elevado ao outro.
*/

#include <locale.h>
#include <stdio.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int v1, v2, p;

    printf("Insira o primeiro valor: ");
    scanf("%i", &v1);

    printf("Agora insira o segundo valor: ");
    scanf("%i", &v2);

    p = pow(v1, v2);

    printf("Resultado: %i ^ %i = %i", v1, v2, p);
    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
