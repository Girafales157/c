/*
21) No momento, por conta da administração pública péssima e da corrupção em todos os setores
estatais, os comerciantes estão procurando aumentar suas vendas oferecendo desconto. Faça um
algoritmo que possa receber um valor de um produto e que escreva o novo valor tendo em vista que o
desconto foi de 9%.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float comprimento, largura, profundidade;
    float volume, valor_total;

    // Entrada das dimensões da piscina
    printf("Digite o comprimento da piscina (em metros): ");
    scanf("%f", &comprimento);

    printf("Digite a largura da piscina (em metros): ");
    scanf("%f", &largura);

    printf("Digite a profundidade da piscina (em metros): ");
    scanf("%f", &profundidade);

    // Cálculo do volume e do valor total
    volume = comprimento * largura * profundidade;
    valor_total = volume * 45.00;

    // Exibição do resultado
    printf("\nVolume da piscina: %.2f m³\n", volume);
    printf("Valor da construção: R$ %.2f\n", valor_total);

    return 0;
}
