/*
33) Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
• A idade dessa pessoa;
•Quantos anos ela terá em 2028.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int an, aa, ia, ifutura;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &an);

    printf("\nDigite o ano atual: ");
    scanf("%d", &aa);

    ia = aa - an;
    ifutura = 2028 - an;

    printf("\nIdade atual: %d anos\n", ia);
    printf("\nIdade em 2028: %d anos\n", ifutura);

    return 0;
}
