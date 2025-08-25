/*
18) Faça um programa que receba a quantidade e o valor de três produtos, no seguinte formato:
quantidade1 valor1 quantidade2 valor2 quantidade3 valor3. O programa deve calcular esses valores
seguindo a fórmula total = quantidade1* valor1 + quantidade2 * valor2 + quantidade3 * valor3. O valor
total deve ser apresentado no final da execução do programa.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int q1, q2, q3;
    float v1, v2, v3;

    printf("Insira os valores do produto #1.\n");
    printf("\tQuantidade: "); scanf("%i", &q1);
    printf("\tPreço: R$ "); scanf("%f", &v1);

    printf("\nAgora, insira os valores do produto #2.\n");
    printf("\tQuantidade: "); scanf("%i", &q2);
    printf("\tPreço: R$ "); scanf("%f", &v2);

    printf("\nPor fim, insira os valores do produto #3.\n");
    printf("\tQuantidade: "); scanf("%i", &q3);
    printf("\tPreço: R$ "); scanf("%f", &v3);

    float total = q1*v1 + q2*v2 + q3*v3;

    printf("\nPreço total a pagar: R$ %.2f.\n", total);
    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
