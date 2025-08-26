/*
22) Entrar via teclado com o valor de cinco produtos. Após as entradas, digitar um valor referente ao
pagamento da somatória destes valores. Calcular e exibir o troco que deverá ser devolvido.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float p1, p2, p3, p4, p5;
    float p, total, troco;

    printf("Digite o valor do produto 1: ");
    scanf("%f", &p1);
    printf("Digite o valor do produto 2: ");
    scanf("%f", &p2);
    printf("Digite o valor do produto 3: ");
    scanf("%f", &p3);
    printf("Digite o valor do produto 4: ");
    scanf("%f", &p4);
    printf("Digite o valor do produto 5: ");
    scanf("%f", &p5);

    printf("Digite o valor do pagamento: ");
    scanf("%f", &p);

    total = p1 + p2 + p3 + p4 + p5;
    troco = p - total;

    printf("\nTotal da compra: R$ %.2f\n", total);
    printf("Pagamento: R$ %.2f\n", p);
    printf("Troco: R$ %.2f\n", troco);

    return 0;
}
