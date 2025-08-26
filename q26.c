/*
26) Fa�a um algoritmo que ap�s a entrada de uma determinada dist�ncia entre dois pontos (em KM) e
uma determinada velocidade (km/h), diga qual o tempo m�dio que levar� para chegada a esse local e
qual a velocidade em metros/segundo.
*/
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float d, v;

    printf("Insira a dist�ncia do trajeto a percorrer em quil�metros: ");
    scanf("%f", &d);

    printf("\nAgora, insira a velocidade em quil�metros por hora: ");
    scanf("%f", &v);

    float t = d / v;

    float vms = v * 1000 / 3600;

    printf("Tempo m�dio de viagem: %.2f horas\n", t);
    printf("Velocidade em m/s: %.2f\n", vms);

    return 0;
}
