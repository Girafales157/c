/*
32) Fa�a um algoritmo que apresente, para um sal�rio informado pelo usu�rio, um novo sal�rio com
aumento de 37%.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float s, ns;

    printf("Digite o sal�rio atual do funcion�rio: ");
    scanf("%f", &s);

    ns = s * 1.37;

    printf("\nNovo sal�rio com aumento de 37%%: R$ %.2f\n", ns);

    return 0;
}
