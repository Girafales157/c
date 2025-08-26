/*
28) Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de
conversão é: F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.)
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float c, f;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &c);

    f = (9 * c + 160) / 5;

    printf("\nTemperatura em Fahrenheit: %.2f°F\n", f);

    return 0;
}
