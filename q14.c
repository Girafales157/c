/*
14) Sabe-se que o kilowatt de energia custa um quinto do salário mínimo. Faça um algoritmo que
receba o valor do salário mínimo e a quantidade de quilowatts gasta por uma residência. Calcule e
imprima:
• o valor, em reais, de cada kilowatt;
• o valor, em reais, a ser pago por essa residência;
• o novo valor a ser pago por essa residência, a partir de um desconto de 15%.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float salMin = 1518, kW, valKW, total, comDesc;

    printf("A dia de hoje, 27/08/2025, o salário mínimo está cotado em R$ %.2f.\n", salMin);

    printf("Informe a quantidade de kW consumidos: ");
    scanf("%f", &kW);

    valKW = salMin / 5;
    total = valKW * kW;
    comDesc = total * 0.85;

    printf("\nValor de cada kW: R$ %.2f\n", valKW);
    printf("Valor total a pagar: R$ %.2f\n", total);
    printf("Valor com 15%% de desconto: R$ %.2f\n", comDesc);
    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
