#include <stdio.h>
#include <locale.h>
//POR ALGUM MOTIVO N TÁ QUERENDO PEGAR O MATH.H
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    double v1, v2, p;

    printf("Insira o primeiro valor: ");
    scanf("%lf", &v1);

    printf("Agora insira o segundo valor: ");
    scanf("%lf", &v2);

    //fica dizendo q pow() n foi encontrado
    p = pow(v1, v2);
    
    printf("%.1lf", p);

    return 0;
}
