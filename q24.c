/*
24) No momento, por conta da administra��o p�blica p�ssima e da corrup��o em todos os setores
estatais, os comerciantes est�o procurando aumentar suas vendas oferecendo desconto. Fa�a um
algoritmo que possa receber um valor de um produto e que escreva o novo valor tendo em vista que o
desconto foi de 9%.
*/

#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Portuguese");

    float vOriginal, vcd;

    // Entrada do valor do produto
    printf("Digite o valor do produto: R$ ");
    scanf("%f", &vOriginal);

    // C�lculo do desconto de 9%
    vcd = vOriginal * 0.91;

    // Exibi��o do novo valor
    printf("Valor com 9%% de desconto: R$ %.2f\n", vcd);

    return 0;
}
