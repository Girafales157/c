/*
29) A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) prestações sem juros. Faça
um algoritmo que receba um valor de uma compra e mostre o valor das prestações
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float v, p;

    printf("Digite o valor do produto: ");
    scanf("%f", &v);

    p = v / 5;

    printf("\nValor de cada prestação (sem juros): %.2f\n", p);

    return 0;
}
