/*
6) Faça um algoritmo que receba um número inteiro, calcule e imprima a tabuada de multiplicação desse número.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n;
    // int tn;

    printf("Digite um número: ");
    scanf("%i", &n);

    //muito indignado por não poder usar laço, função, biblioteca...
    // printf("Até qual número gostaria de multiplicar?: ");
    // scanf("%i", &tn);

    // for (int i = 1; i <= tn; i++)
    // {
    //     int r = n * i;
    //     printf("%i * %i = %i\n", n, i, r);
    // }

    printf("%i * 1 = %i\n", n, n*1);
    printf("%i * 2 = %i\n", n, n*2);
    printf("%i * 3 = %i\n", n, n*3);
    printf("%i * 4 = %i\n", n, n*4);
    printf("%i * 5 = %i\n", n, n*5);
    printf("%i * 6 = %i\n", n, n*6);
    printf("%i * 7 = %i\n", n, n*7);
    printf("%i * 8 = %i\n", n, n*8);
    printf("%i * 9 = %i\n", n, n*9);
    printf("%i * 10 = %i\n", n, n*10);

    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
