/*
9) Faça um algoritmo que calcule e imprima a área das seguintes figuras geométricas:
• triângulo; quadrado; círculo; trapézio; retângulo; losango.
*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

#define PI 3.141592653589793

int main() {
    setlocale(LC_ALL, "Portuguese");

    float b, alt, l, r, bMaior, bMenor, diaMaior, diaMenor;

    printf("Área do Triângulo\n");
    printf("Digite a base: ");
    scanf("%f", &b);
    printf("Digite a altura: ");
    scanf("%f", &alt);
    printf("Área: %.2f\n\n", (b * alt) / 2);

    // Quadrado
    printf("Área do Quadrado\n");
    printf("Digite o lado: ");
    scanf("%f", &l);
    printf("Área: %.2f\n\n", l * l);

    // Círculo
    printf("Área do Círculo\n");
    printf("Digite o raio: ");
    scanf("%f", &r);
    printf("Área: %.2f\n\n", PI * r * r);

    // Trapézio
    printf("Área do Trapézio\n");
    printf("Digite a base maior: ");
    scanf("%f", &bMaior);
    printf("Digite a base menor: ");
    scanf("%f", &bMenor);
    printf("Digite a altura: ");
    scanf("%f", &alt);
    printf("Área: %.2f\n\n", ((bMaior + bMenor) * alt) / 2);

    // Retângulo
    printf("Área do Retângulo\n");
    printf("Digite a base: ");
    scanf("%f", &b);
    printf("Digite a altura: ");
    scanf("%f", &alt);
    printf("Área: %.2f\n\n", b * alt);

    // Losango
    printf("Área do Losango\n");
    printf("Digite a diagonal maior: ");
    scanf("%f", &diaMaior);
    printf("Digite a diagonal menor: ");
    scanf("%f", &diaMenor);
    printf("Área: %.2f\n\n", (diaMaior * diaMenor) / 2);

    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
