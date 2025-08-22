#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n, tn;

    printf("Digite um número: ");
    scanf("%i", &n);

    printf("Até qual número gostaria de multiplicar?: ");
    scanf("%i", &tn);

    for (int i = 1; i <= tn; i++)
    {
        int r = n * i;
        printf("%i * %i = %i\n", n, i, r);
    }
    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
