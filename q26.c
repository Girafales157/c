/*
26) Faça um algoritmo que após a entrada de uma determinada distância entre dois pontos (em KM) e
uma determinada velocidade (km/h), diga qual o tempo médio que levará para chegada a esse local e
qual a velocidade em metros/segundo.
*/
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float d, v;

    printf("Insira a distância do trajeto a percorrer em quilômetros: ");
    scanf("%f", &d);

    printf("\nAgora, insira a velocidade em quilômetros por hora: ");
    scanf("%f", &v);

    float t = d / v;

    float vms = v * 1000 / 3600;

    printf("Tempo médio de viagem: %.2f horas\n", t);
    printf("Velocidade em m/s: %.2f\n", vms);

    return 0;
}
