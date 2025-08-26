/*
25) Uma pessoa resolveu fazer uma aplicação em uma poupança programada. Para calcular seu
rendimento, ela deverá fornecer o valor constante da aplicação mensal, a taxa e o número de meses.
Sabendo-se que a fórmula usada para este cálculo é:
Valor acumulado = (P*(1 +i)n – 1)/i em que i = taxa, P = aplicação mensal e n = número de meses.
*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float P, i, n;

    printf("Forneça o valor constante da aplicação mensal: ");
    scanf("%f", &P);

    printf("\nAgora, forneça a taxa: ");
    scanf("%f", &i);

    printf("\nPor fim, forneça o número de meses: ");
    scanf("%f", &n);

    float a = (P * (pow(1 + i, n) - 1)) / i;

    printf("Valor acumulado: %.2f\n", a);

    return 0;
}
