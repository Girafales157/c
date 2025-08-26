/*
36) Um hotel deseja fazer uma promoção especial de final de semana, concedendo um desconto de
25% na diária. Sendo informados, através do teclado, o número de apartamentos do hotel e o valor da
diária por apartamento para o final de semana completo, elabore um programa para calcular:
• Valor promocional da diária;
• Valor total a ser arrecadado caso a ocupação neste final de semana atinja 100%;
• Valor total a ser arrecadado caso a ocupação neste final de semana atinja 70%;
• Valor que o hotel deixará de arrecadar em virtude da promoção, caso a ocupação atinja 100%.
*/
#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int apt;
    float d, dp;
    float t100, t70, pp;

    printf("Digite o número de apartamentos do hotel:\n");
    scanf("%d", &apt);

    printf("Digite o valor da diária por apartamento (final de semana completo):\n");
    scanf("%f", &d);

    dp = d * 0.75;

    t100 = apt * dp;

    t70 = apt * 0.7 * dp;

    pp = apt * (d - dp);

    printf("Valor promocional da diária: R$ %.2f\n", dp);
    printf("Total arrecadado com 100%% de ocupação: R$ %.2f\n", t100);
    printf("Total arrecadado com 70%% de ocupação: R$ %.2f\n", t70);
    printf("Valor que o hotel deixa de arrecadar com a promoção (100%% ocupação): R$ %.2f\n", pp);

    return 0;
}
