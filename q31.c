/*
31) O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do
distribuidor e dos impostos (aplicados, primeiro os impostos sobre o custo de f�brica, e depois a
percentagem do distribuidor sobre o resultado). Supondo que a percentagem do distribuidor seja de 28%
e os impostos 45%. Escrever um algoritmo que leia o custo de f�brica de um carro e informe o custo ao
consumidor do mesmo.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float cf, ci, cd, cc;

    printf("Digite o custo de f�brica do carro: ");
    scanf("%f", &cf);

    ci = cf * 0.45;
    float st = cf + ci;

    cd = st * 0.28;

    cc = st + cd;

    printf("\nCusto ao consumidor: R$ %.2f\n", cc);

    return 0;

}
