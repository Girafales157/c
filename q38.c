/*
38) Elabore um algoritmo para efetuar o cálculo da quantidade de combustível gasto em uma viagem,
utilizando-se um automóvel que faz 12 Kms por litro. Para obter o cálculo, o usuário deverá fornecer o
tempo gasto e a velocidade média durante a viagem. Desta forma, será possível obter a distância
percorrida (distância = tempo * velocidade).
*/
#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float tmp, vel, dist, comb;

    printf("Tempo de viagem (horas):\n");
    scanf("%f", &tmp);

    printf("Velocidade média (km/h):\n");
    scanf("%f", &vel);

    dist = tmp * vel;
    comb = dist / 12;

    printf("Distância percorrida: %.2f km\n", dist);
    printf("Combustível gasto: %.2f litros\n", comb);

    return 0;
}
