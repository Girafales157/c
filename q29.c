/*
29) A Loja Mam�o com A��car est� vendendo seus produtos em 5 (cinco) presta��es sem juros. Fa�a
um algoritmo que receba um valor de uma compra e mostre o valor das presta��es
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float v, p;

    printf("Digite o valor do produto: ");
    scanf("%f", &v);

    p = v / 5;

    printf("\nValor de cada presta��o (sem juros): %.2f\n", p);

    return 0;
}
