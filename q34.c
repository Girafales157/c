/*
34) Cada degrau de uma escada tem uma altura X. Faça um algoritmo que receba essa altura e a altura
que o usuário deseja alcançar subindo a escada. Calcule e mostre quantos degraus o usuário deverá
subir para atingir seu objetivo.
*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float altDegrau, altDesejada;
    int qDegraus;

    printf("Digite a altura de cada degrau (em metros):\n");
    scanf("%f", &altDegrau);

    printf("Digite a altura que deseja alcançar (em metros):\n");
    scanf("%f", &altDesejada);

    qDegraus = ceil(altDesejada / altDegrau);

    printf("Você deverá subir %d degraus para atingir essa altura.\n", qDegraus);

    return 0;
}
