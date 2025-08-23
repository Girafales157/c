#include <locale.h>
#include <stdio.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float v, sqrV, powV;

    printf("Insira um valor: ");
    scanf("%f", &v);

    sqrV = sqrt(v);
    powV = pow(v, 2);

    printf("A raíz quadrada desse número é %.1f e seu quadrado %.1f.", sqrV, powV);
    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
