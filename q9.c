#include <locale.h>
#include <stdio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int sal;
    float nSalMin;

    printf("Insira seu atual sal�rio (despreze qualquer valor ap�s a casa decimal!!):\n");
    scanf("%i", &sal);

    nSalMin = (float)sal/1518;

    printf("Considerando que o sal�rio m�nimo no Brasil - segundo fontes oficiais\n(PLANALTO.GOV.BR).\- a dia de hoje (27/08/2025) est� cotado em R$ 1518,00.\nSendo assim, seu sal�rio equivale a %.2f sal�rios m�nimos.\n", nSalMin);
    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
