/*
30) Faça um algoritmo que receba o preço de custo de um produto e mostre o valor de venda. Sabe-se
que o preço de custo receberá um acréscimo de acordo com um percentual informado pelo usuário.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float c, p;

    printf("Insira o custo do produto: ");
    scanf("%f", &c);

    printf("\nInsira o percentual de acréscimo para venda: ");
    scanf("%f", &p);

    printf("\nValor de venda: %.2f", c * p);

    return 0;
}
