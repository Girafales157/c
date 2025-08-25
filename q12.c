/*
12) Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o valor do imposto de
renda a ser pago, sabendo que o imposto equivale a 5% do salário.
*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int sal;
    float i;

    printf("Digite seu salário (Desconsidere qualquer valor após a casa decimal!!): ");
    scanf("%i", &sal);

    i = sal * 0.05;

    printf("Total de imposto de renda a pagar: %.1f", i);
    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
