/*
15) Faça um algoritmo que receba o peso de uma pessoa, um valor inteiro, calcule e imprima:
• o peso dessa pessoa em gramas;
• se essa pessoa engordar 5%, qual será seu novo peso em gramas.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    int pKg;
    float pG, pG5;

    printf("Digite o peso da pessoa em kg (inteiro): ");
    scanf("%d", &pKg);

    pG = pKg * 1000;

    pG5 = pG * 1.05;

    printf("Peso em gramas: %.2f g\n", pG);
    printf("Peso com 5%% a mais: %.2f g\n", pG5);
    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
