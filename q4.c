/*
4) Faça um algoritmo que receba três notas de um aluno, calcule e imprima a média aritmética entre essas notas.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3;
    double m;

    printf("Insira a primeira nota: ");
    scanf("%i", &n1);

    printf("Agora insira a segunda nota: ");
    scanf("%i", &n2);

    printf("Por último, insira a terceira nota: ");
    scanf("%i", &n3);

    m = ((float)n1 + (float)n2 + (float)n3)/3;

    printf("A média aritmética das notas é: %.1f", m);
    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
