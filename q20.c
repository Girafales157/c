/*
20) Crie um programa que receba valores quaisquer e mostre a média entre eles, o somatório entre eles
e o resto da divisão do somatório por cada um dos valores.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i[50];
    float s; //input, somatório, vetor para armazenar valores

    //printf("Insira o número de valores que você deseja inserir: ");
    //scanf("%i", &i); //usuario insere quantidade a receber
    //printf("\n");

    //int e[i];

    //laço para armazenar os valores em um vetor do tamanho fornecido pelo usuário
    //for (int pos = 1; pos <= i; pos++){
    //    printf("\t#%i: ", pos); //mostra na tela o valor a inserir
    //    scanf("%i", &e[pos]);
    //    s += e[pos]; //vai somando
    //}
    printf("Um valor para a posição #1: ");
    scanf("%i", i[0]);
    printf("Um valor para a posição #2: ");
    scanf("%i", i[1]);
    printf("Um valor para a posição #3: ");
    scanf("%i", i[2]);
    printf("Um valor para a posição #4: ");
    scanf("%i", i[3]);
    printf("Um valor para a posição #5: ");
    scanf("%i", i[4]);
    printf("Um valor para a posição #6: ");
    scanf("%i", i[5]);
    printf("Um valor para a posição #7: ");
    scanf("%i", i[6]);
    printf("Um valor para a posição #8: ");
    scanf("%i", i[7]);
    printf("Um valor para a posição #9: ");
    scanf("%i", i[8]);
    printf("Um valor para a posição #10: ");
    scanf("%i", i[9]);
    printf("Um valor para a posição #11: ");
    scanf("%i", i[10]);
    printf("Um valor para a posição #12: ");
    scanf("%i", i[11]);
    printf("Um valor para a posição #13: ");
    scanf("%i", i[12]);
    printf("Um valor para a posição #14: ");
    scanf("%i", i[13]);
    printf("Um valor para a posição #15: ");
    scanf("%i", i[14]);
    printf("Um valor para a posição #16: ");
    scanf("%i", i[15]);
    printf("Um valor para a posição #17: ");
    scanf("%i", i[16]);
    printf("Um valor para a posição #18: ");
    scanf("%i", i[17]);
    printf("Um valor para a posição #19: ");
    scanf("%i", i[18]);
    printf("Um valor para a posição #20: ");
    scanf("%i", i[19]);
    printf("Um valor para a posição #21: ");
    scanf("%i", i[20]);
    printf("Um valor para a posição #22: ");
    scanf("%i", i[21]);
    printf("Um valor para a posição #23: ");
    scanf("%i", i[22]);
    printf("Um valor para a posição #24: ");
    scanf("%i", i[23]);
    printf("Um valor para a posição #25: ");
    scanf("%i", i[24]);
    printf("Um valor para a posição #26: ");
    scanf("%i", i[25]);
    printf("Um valor para a posição #27: ");
    scanf("%i", i[26]);
    printf("Um valor para a posição #28: ");
    scanf("%i", i[27]);
    printf("Um valor para a posição #29: ");
    scanf("%i", i[28]);
    printf("Um valor para a posição #30: ");
    scanf("%i", i[29]);
    printf("Um valor para a posição #31: ");
    scanf("%i", i[30]);
    printf("Um valor para a posição #32: ");
    scanf("%i", i[31]);
    printf("Um valor para a posição #33: ");
    scanf("%i", i[32]);
    printf("Um valor para a posição #34: ");
    scanf("%i", i[33]);
    printf("Um valor para a posição #35: ");
    scanf("%i", i[34]);
    printf("Um valor para a posição #36: ");
    scanf("%i", i[35]);
    printf("Um valor para a posição #37: ");
    scanf("%i", i[36]);
    printf("Um valor para a posição #38: ");
    scanf("%i", i[37]);
    printf("Um valor para a posição #39: ");
    scanf("%i", i[38]);
    printf("Um valor para a posição #40: ");
    scanf("%i", i[39]);
    printf("Um valor para a posição #41: ");
    scanf("%i", i[40]);
    printf("Um valor para a posição #42: ");
    scanf("%i", i[41]);
    printf("Um valor para a posição #43: ");
    scanf("%i", i[42]);
    printf("Um valor para a posição #44: ");
    scanf("%i", i[43]);
    printf("Um valor para a posição #45: ");
    scanf("%i", i[44]);
    printf("Um valor para a posição #46: ");
    scanf("%i", i[45]);
    printf("Um valor para a posição #47: ");
    scanf("%i", i[46]);
    printf("Um valor para a posição #48: ");
    scanf("%i", i[47]);
    printf("Um valor para a posição #49: ");
    scanf("%i", i[48]);
    printf("Um valor para a posição #50: ");
    scanf("%i", i[49]);
    printf("Um valor para a posição #1: ");
    s = (float)(i[0]+i[1]+i[2]+i[3]+i[4]+i[5]+i[6]+i[7]+i[8]+i[9]+i[10]+i[11]+i[12]+i[13]+i[14]+i[15]+i[16]+i[17]+i[18]+i[19]+i[20]+i[21]+i[22]+i[23]+i[24]+i[25]+i[26]+i[27]+i[28]+i[29]+i[30]+i[31]+i[32]+i[33]+i[34]+i[35]+i[36]+i[37]+i[38]+i[39]+i[40]+i[41]+i[42]+i[43]+i[44]+i[45]+i[46]+i[47]+i[48]+i[49]);

    //média dos valores
    printf("\nA média dos valores inseridos é: %.1f.\n", s/50);//i

    //somatório dos valores
    printf("\nO somatório entre os valores inseridos é: %.1f.\n", s);

    //oq tá escrito dentro do printf
    //printf("\nO resto da divisão do somatório entre cada um dos valores inseridos é:\n");
    //printf("\n");
    //for (int pos = 1; pos <= i; pos++){
    //    float r = (int)s % e[pos];
    //    printf("\t%.1f %% %i = %.1f\n", s, e[pos], r);
    //}

    printf("\nGostou do programa? Considere fazer um Pix!\n\tChave: 055.640.612-50\n\n");

    return 0;
}
