#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, p1, n2, p2;
    double mp;

    printf("Insira a primeira nota: ");
    scanf("%i", &n1);

    printf("Insira peso da nota: ");
    scanf("%i", &p1);

    printf("Agora insira a segunda nota: ");
    scanf("%i", &n2);

    printf("Insira o peso da nota: ");
    scanf("%i", &p2);

    mp = ((float)n1 * p1 + (float)n2 * p2) / (p1 + p2);

    printf("A média aritmética das notas é: %.1f", mp);
    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
