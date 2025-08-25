/*
19) Crie um programa que receba a largura e o comprimento de um lote de terra e mostre a área total
existente.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float l, c, a;

    printf("Digite a largura do lote (em metros): ");
    scanf("%f", &l);

    printf("\nDigite o comprimento do lote (em metros): ");
    scanf("%f", &c);

    a = l * c;

    printf("\nA área total do lote é: %.2f metros quadrados.\n", a);
    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
