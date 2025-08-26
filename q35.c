/*
35) Faça um algoritmo que receba o peso e a altura de uma pessoa e calcule o índice de massa
corpórea. Ele mede a relação entre peso e altura (peso em Kg, dividido pelo quadrado da altura em
metros).
*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float p, alt, imc;

    printf("Digite o peso em kg: ");
    scanf("%f", &p);

    printf("\nDigite a altura em metros: ");
    scanf("%f", &alt);

    imc = p / pow(alt, 2);

    printf("\nO Índice de Massa Corpórea (IMC) é: %.2f\n", imc);

    return 0;
}
