/*
25) Uma pessoa resolveu fazer uma aplica��o em uma poupan�a programada. Para calcular seu
rendimento, ela dever� fornecer o valor constante da aplica��o mensal, a taxa e o n�mero de meses.
Sabendo-se que a f�rmula usada para este c�lculo �:
Valor acumulado = (P*(1 +i)n � 1)/i em que i = taxa, P = aplica��o mensal e n = n�mero de meses.
*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float P, i, n;

    printf("Forne�a o valor constante da aplica��o mensal: ");
    scanf("%f", &P);

    printf("\nAgora, forne�a a taxa: ");
    scanf("%f", &i);

    printf("\nPor fim, forne�a o n�mero de meses: ");
    scanf("%f", &n);

    float a = (P * (pow(1 + i, n) - 1)) / i;

    printf("Valor acumulado: %.2f\n", a);

    return 0;
}
