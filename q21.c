/*
21) No momento, por conta da administra��o p�blica p�ssima e da corrup��o em todos os setores
estatais, os comerciantes est�o procurando aumentar suas vendas oferecendo desconto. Fa�a um
algoritmo que possa receber um valor de um produto e que escreva o novo valor tendo em vista que o
desconto foi de 9%.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float comprimento, largura, profundidade;
    float volume, valor_total;

    // Entrada das dimens�es da piscina
    printf("Digite o comprimento da piscina (em metros): ");
    scanf("%f", &comprimento);

    printf("Digite a largura da piscina (em metros): ");
    scanf("%f", &largura);

    printf("Digite a profundidade da piscina (em metros): ");
    scanf("%f", &profundidade);

    // C�lculo do volume e do valor total
    volume = comprimento * largura * profundidade;
    valor_total = volume * 45.00;

    // Exibi��o do resultado
    printf("\nVolume da piscina: %.2f m�\n", volume);
    printf("Valor da constru��o: R$ %.2f\n", valor_total);

    return 0;
}
