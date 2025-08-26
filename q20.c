/*
20) Crie um programa que receba valores quaisquer e mostre a média entre eles, o somatório entre eles
e o resto da divisão do somatório por cada um dos valores.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float a, b, c;
    float soma, media;
    int resto_a, resto_b, resto_c;

    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    printf("Digite o segundo valor: ");
    scanf("%f", &b);
    printf("Digite o terceiro valor: ");
    scanf("%f", &c);

    soma = a + b + c;
    media = soma / 3;

    resto_a = (int)soma % (int)a;
    resto_b = (int)soma % (int)b;
    resto_c = (int)soma % (int)c;

    printf("\nSomatório: %.2f\n", soma);
    printf("Média: %.2f\n", media);
    printf("Resto da divisão do somatório por %.0f: %d\n", a, resto_a);
    printf("Resto da divisão do somatório por %.0f: %d\n", b, resto_b);
    printf("Resto da divisão do somatório por %.0f: %d\n", c, resto_c);

    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
