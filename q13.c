/*
13) Fa�a um algoritmo que receba o sal�rio de um funcion�rio, calcule e imprima o novo sal�rio
sabendo-se que este sofreu um aumento de 25%.
*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int salI;
    float salF;

    printf("Digite seu sal�rio (Desconsidere qualquer valor ap�s a casa decimal!!): ");
    scanf("%i", &salI);

    salF = salI * 1.25;

    printf("Novo sal�rio: %.1f (aumento de 25%%)", salF);
    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
