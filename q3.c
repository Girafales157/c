#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int v1, v2;
    float s;

    printf("Insira o primeiro valor: ");
    scanf("%i", &v1);

    printf("Agora insira o segundo valor: ");
    scanf("%i", &v2);

    s = (float)v1 / (float)v2;

    printf("O resultado da divisão de do primeiro valor pelo segundo é: %f", s);
    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
