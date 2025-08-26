/*
38) Elabore um algoritmo para efetuar o c�lculo da quantidade de combust�vel gasto em uma viagem,
utilizando-se um autom�vel que faz 12 Kms por litro. Para obter o c�lculo, o usu�rio dever� fornecer o
tempo gasto e a velocidade m�dia durante a viagem. Desta forma, ser� poss�vel obter a dist�ncia
percorrida (dist�ncia = tempo * velocidade).
*/
#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float tmp, vel, dist, comb;

    printf("Tempo de viagem (horas):\n");
    scanf("%f", &tmp);

    printf("Velocidade m�dia (km/h):\n");
    scanf("%f", &vel);

    dist = tmp * vel;
    comb = dist / 12;

    printf("Dist�ncia percorrida: %.2f km\n", dist);
    printf("Combust�vel gasto: %.2f litros\n", comb);

    return 0;
}
