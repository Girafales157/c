/*
Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual. Calcule e
imprima:
• a idade dessa pessoa;
• essa idade convertida em semanas.
*/
#include <stdio.h>
#include <locale.h>
//#include <time.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int anoNasc, anoAtual;
    //time_t tmp_s;

    //time(&tmp_s);

    //struct tm *infTmpAtual;

    //infTmpAtual = localtime(&tmp_s);

    //anoAtual = infTmpAtual->tm_year + 1900;
    anoAtual = 2025;

    printf("Insira seu ano de nascimento: ");
    scanf("%i", &anoNasc);

    printf("Você tem %i anos.\nEm semanas, %i.", anoAtual - anoNasc, (anoAtual - anoNasc)*54);
    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");


    return 0;
}
