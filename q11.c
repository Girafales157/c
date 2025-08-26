/*
11) Calcular e exibir a área de um quadrado a partir do valor de sua diagonal que será digitado.
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float d, a, l;

    printf("Insira o valor da diagonal interna de um quadrado: ");
    scanf("%f", &d);

    //h^2 = a^2 + b^2
    l = d/sqrt(2);

    l = d / sqrt(2);
    a = l * l;

    printf("A área do quadrado: %.1f", a);
    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
