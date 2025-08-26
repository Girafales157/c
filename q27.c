/*
27) Um sistema de equa��es lineares da forma ax + by = c, pode ser resolvido utilizando-se as
seguintes f�rmulas: (n�o d� pra colocar imagem de f�rmula aqui)
Fa�a um algoritmo para ler os coeficientes (a,b,c,d,e,f) das equa��es e calcular e exibir os valores de x e
y.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float a, b, c, d, e, f;

    // Instru��es para entrada
    printf("Digite os coeficientes da primeira equa��o (Ax + By = C) no formato \"A B C\": ");
    scanf("%f %f %f", &a, &b, &c);

    printf("\nDigite os coeficientes da segunda equa��o (Dx + Ey = F) no formato \"D E F\": ");
    scanf("%f %f %f", &d, &e, &f);

    // C�lculo do denominador comum
    float denominador = a * e - b * d;

    // C�lculo de x e y
    float y = (a * f - c * d) / denominador;
    float x = (c * e - b * f) / denominador;

    // Sa�das
    printf("\nResultado:\n");
    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);

    return 0;
}
