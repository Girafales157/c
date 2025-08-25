/*
13) Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o novo salário
sabendo-se que este sofreu um aumento de 25%.
*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int salI;
    float salF;

    printf("Digite seu salário (Desconsidere qualquer valor após a casa decimal!!): ");
    scanf("%i", &salI);

    salF = salI * 1.25;

    printf("Novo salário: %.1f (aumento de 25%%)", salF);
    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
