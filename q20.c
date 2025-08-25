/*
20) Crie um programa que receba valores quaisquer e mostre a m�dia entre eles, o somat�rio entre eles
e o resto da divis�o do somat�rio por cada um dos valores.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i;
    float s; //input, somat�rio, vetor para armazenar valores

    printf("Insira o n�mero de valores que voc� deseja inserir: ");
    scanf("%i", &i); //usuario insere quantidade a receber
    printf("\n");

    int e[i];

    //la�o para armazenar os valores em um vetor do tamanho fornecido pelo usu�rio
    for (int pos = 1; pos <= i; pos++){
        printf("\t#%i: ", pos); //mostra na tela o valor a inserir
        scanf("%i", &e[pos]);
        s += e[pos]; //vai somando
    }

    //m�dia dos valores
    printf("\nA m�dia dos valores inseridos �: %.1f.\n", s/i);

    //somat�rio dos valores
    printf("\nO somat�rio entre os valores inseridos �: %.1f.\n", s);

    //oq t� escrito dentro do printf
    printf("\nO resto da divis�o do somat�rio entre cada um dos valores inseridos �:\n");
    printf("\n");
    for (int pos = 1; pos <= i; pos++){
        float r = (int)s % e[pos];
        printf("\t%.1f %% %i = %.1f\n", s, e[pos], r);
    }
    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
