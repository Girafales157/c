/*
37) Faça um algoritmo que receba o custo de um espetáculo teatral e o preço do convite esse
espetáculo. Esse programa deve calcular e mostrar:
•A quantidade de convites que devem ser vendidos para que pelo menos o custo do espetáculo seja
alcançado.
•A quantidade de convites que devem ser vendidos para que se tenha um lucro de 23%.
*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float custoEspetaculo, precoConvite;
    int qtdCusto, qtdLucro;

    printf("Custo do espetáculo:\n");
    scanf("%f", &custoEspetaculo);

    printf("Preço do convite:\n");
    scanf("%f", &precoConvite);

    qtdCusto = ceil(custoEspetaculo / precoConvite);
    qtdLucro = ceil((custoEspetaculo * 1.23) / precoConvite);

    printf("Convites para cobrir custo: %d\n", qtdCusto);
    printf("Convites para lucro de 23%%: %d\n", qtdLucro);

    return 0;
}
