/*
12) Fa�a um algoritmo que receba o sal�rio de um funcion�rio, calcule e imprima o valor do imposto de
renda a ser pago, sabendo que o imposto equivale a 5% do sal�rio.
*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int sal;
    float i;

    printf("Digite seu sal�rio (Desconsidere qualquer valor ap�s a casa decimal!!): ");
    scanf("%i", &sal);

    i = sal * 0.05;

    printf("Total de imposto de renda a pagar: %.1f", i);
    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
