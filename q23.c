/*
23) Escreva um algoritmo para trocar os valores de três variáveis A, B e C de modo que A fique com o
valor de B, B fique com o valor de C e C fique com o valor de A.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int A, B, C, temp;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);

    temp = A;  // Guarda o valor original de A
    A = B;     // A recebe o valor de B
    B = C;     // B recebe o valor de C
    C = temp;  // C recebe o valor original de A

    printf("\nNovos valores:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);

    return 0;
}
