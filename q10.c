#include <locale.h>
#include <stdio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int continuar = 1;
    char input;

    while(continuar != 0){
        continuar = Menu();
    }

    return 0;
}

int Menu(){
    printf("Escolha uma forma geom�trica entre as seguintes:\n");
    printf("a) Tri�ngulo;\n");
    printf("b) Quadrado;\n");
    printf("c) C�rculo;\n");

    return 0;
}
