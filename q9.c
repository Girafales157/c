#include <locale.h>
#include <stdio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int sal;
    float nSalMin;

    printf("Insira seu atual salário (despreze qualquer valor após a casa decimal!!):\n");
    scanf("%i", &sal);

    nSalMin = (float)sal/1518;

    printf("Considerando que o salário mínimo no Brasil - segundo fontes oficiais\n(PLANALTO.GOV.BR).\- a dia de hoje (27/08/2025) está cotado em R$ 1518,00.\nSendo assim, seu salário equivale a %.2f salários mínimos.\n", nSalMin);
    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
