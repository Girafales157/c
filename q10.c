/*
9) Fa�a um algoritmo que calcule e imprima a �rea das seguintes figuras geom�tricas:
� tri�ngulo; quadrado; c�rculo; trap�zio; ret�ngulo; losango.
*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

#define PI 3.141592653589793

int main() {
    setlocale(LC_ALL, "Portuguese");

    float b, alt, l, r, bMaior, bMenor, diaMaior, diaMenor;

    printf("�rea do Tri�ngulo\n");
    printf("Digite a base: ");
    scanf("%f", &b);
    printf("Digite a altura: ");
    scanf("%f", &alt);
    printf("�rea: %.2f\n\n", (b * alt) / 2);

    // Quadrado
    printf("�rea do Quadrado\n");
    printf("Digite o lado: ");
    scanf("%f", &l);
    printf("�rea: %.2f\n\n", l * l);

    // C�rculo
    printf("�rea do C�rculo\n");
    printf("Digite o raio: ");
    scanf("%f", &r);
    printf("�rea: %.2f\n\n", PI * r * r);

    // Trap�zio
    printf("�rea do Trap�zio\n");
    printf("Digite a base maior: ");
    scanf("%f", &bMaior);
    printf("Digite a base menor: ");
    scanf("%f", &bMenor);
    printf("Digite a altura: ");
    scanf("%f", &alt);
    printf("�rea: %.2f\n\n", ((bMaior + bMenor) * alt) / 2);

    // Ret�ngulo
    printf("�rea do Ret�ngulo\n");
    printf("Digite a base: ");
    scanf("%f", &b);
    printf("Digite a altura: ");
    scanf("%f", &alt);
    printf("�rea: %.2f\n\n", b * alt);

    // Losango
    printf("�rea do Losango\n");
    printf("Digite a diagonal maior: ");
    scanf("%f", &diaMaior);
    printf("Digite a diagonal menor: ");
    scanf("%f", &diaMenor);
    printf("�rea: %.2f\n\n", (diaMaior * diaMenor) / 2);

    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
