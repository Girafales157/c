/*
17) Crie um programa que receba tr�s nomes quaisquer por meio da linha de execu��o do programa, e
os imprima na tela da seguinte maneira: o primeiro e o �ltimo nomes ser�o impressos na primeira linha
um ap�s o outro, o outro nome (o segundo) ser� impresso na segunda linha.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char n1[32], n2[32], n3[32];

    printf("Insira um nome: ");
    scanf("%s", &n1);

    printf("Insira um segundo nome: ");
    scanf("%s", &n2);

    printf("Agora, insira um terceiro nome: ");
    scanf("%s", &n3);

    printf("Nomes inseridos:\n");
    printf("\tNomes #1 e #3: %s, %s;\n", n1, n2);
    printf("\tNome #2: %s;\n", n2);
    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
