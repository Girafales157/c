/*
37) Fa�a um algoritmo que receba o custo de um espet�culo teatral e o pre�o do convite esse
espet�culo. Esse programa deve calcular e mostrar:
�A quantidade de convites que devem ser vendidos para que pelo menos o custo do espet�culo seja
alcan�ado.
�A quantidade de convites que devem ser vendidos para que se tenha um lucro de 23%.
*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float custoEspetaculo, precoConvite;
    int qtdCusto, qtdLucro;

    printf("Custo do espet�culo:\n");
    scanf("%f", &custoEspetaculo);

    printf("Pre�o do convite:\n");
    scanf("%f", &precoConvite);

    qtdCusto = ceil(custoEspetaculo / precoConvite);
    qtdLucro = ceil((custoEspetaculo * 1.23) / precoConvite);

    printf("Convites para cobrir custo: %d\n", qtdCusto);
    printf("Convites para lucro de 23%%: %d\n", qtdLucro);

    return 0;
}
