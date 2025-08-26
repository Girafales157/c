/*
32) Faça um algoritmo que apresente, para um salário informado pelo usuário, um novo salário com
aumento de 37%.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float s, ns;

    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &s);

    ns = s * 1.37;

    printf("\nNovo salário com aumento de 37%%: R$ %.2f\n", ns);

    return 0;
}
