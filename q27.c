/*
27) Um sistema de equações lineares da forma ax + by = c, pode ser resolvido utilizando-se as
seguintes fórmulas: (não dá pra colocar imagem de fórmula aqui)
Faça um algoritmo para ler os coeficientes (a,b,c,d,e,f) das equações e calcular e exibir os valores de x e
y.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float a, b, c, d, e, f;

    // Instruções para entrada
    printf("Digite os coeficientes da primeira equação (Ax + By = C) no formato \"A B C\": ");
    scanf("%f %f %f", &a, &b, &c);

    printf("\nDigite os coeficientes da segunda equação (Dx + Ey = F) no formato \"D E F\": ");
    scanf("%f %f %f", &d, &e, &f);

    // Cálculo do denominador comum
    float denominador = a * e - b * d;

    // Cálculo de x e y
    float y = (a * f - c * d) / denominador;
    float x = (c * e - b * f) / denominador;

    // Saídas
    printf("\nResultado:\n");
    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);

    return 0;
}
