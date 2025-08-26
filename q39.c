/*
39) Considerando uma eleição de apenas 2 candidatos, elabore um algoritmo que leia do teclado o
número total de eleitores, o número de votos do primeiro candidato e o número de votos do segundo
candidato. Em seguida, o algoritmo deverá apresentar o percentual de votos de cada um dos candidatos
e o percentual de votos nulos.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int total, v1, v2, nulos;
    float p1, p2, pn;

    printf("Total de eleitores:\n");
    scanf("%d", &total);

    printf("Votos do candidato 1:\n");
    scanf("%d", &v1);

    printf("Votos do candidato 2:\n");
    scanf("%d", &v2);

    nulos = total - (v1 + v2);

    p1 = (v1 * 100.0) / total;
    p2 = (v2 * 100.0) / total;
    pn = (nulos * 100.0) / total;

    printf("Candidato 1: %.2f%% dos votos\n", p1);
    printf("Candidato 2: %.2f%% dos votos\n", p2);
    printf("Votos nulos: %.2f%%\n", pn);

    return 0;
}
