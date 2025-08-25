/*
20) Crie um programa que receba valores quaisquer e mostre a média entre eles, o somatório entre eles
e o resto da divisão do somatório por cada um dos valores.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i;
    float s; //input, somatório, vetor para armazenar valores

    printf("Insira o número de valores que você deseja inserir: ");
    scanf("%i", &i); //usuario insere quantidade a receber
    printf("\n");

    int e[i];

    //laço para armazenar os valores em um vetor do tamanho fornecido pelo usuário
    for (int pos = 1; pos <= i; pos++){
        printf("\t#%i: ", pos); //mostra na tela o valor a inserir
        scanf("%i", &e[pos]);
        s += e[pos]; //vai somando
    }

    //média dos valores
    printf("\nA média dos valores inseridos é: %.1f.\n", s/i);

    //somatório dos valores
    printf("\nO somatório entre os valores inseridos é: %.1f.\n", s);

    //oq tá escrito dentro do printf
    printf("\nO resto da divisão do somatório entre cada um dos valores inseridos é:\n");
    printf("\n");
    for (int pos = 1; pos <= i; pos++){
        float r = (int)s % e[pos];
        printf("\t%.1f %% %i = %.1f\n", s, e[pos], r);
    }
    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
