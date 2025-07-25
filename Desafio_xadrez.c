#include <stdio.h>

int main() {
    int torre, bispo, rainha;
    int i;

    // Torre: movimenta 5 casas para a direita usando for
    printf("Digite a posição da torre:\n");
    scanf("%d", &torre);

    printf("Movimentos possíveis da torre:\n");
    printf("Cima\n");
    printf("Baixo\n");
    printf("Esquerda\n");
    printf("Direita\n");

    printf("Movimentos da torre cinco casas para a direita:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Bispo: movimenta 5 casas na diagonal para cima e à direita usando while
    printf("\nDigite a posição do bispo:\n");
    scanf("%d", &bispo);

    printf("Movimentos do bispo cinco casas na diagonal para cima e à direita:\n");
    i = 1;
    while (i <= 5) {
        printf("Cima, Direita\n");
        i++;
    }

    // Rainha: movimenta 8 casas para a esquerda usando do-while
    printf("\nDigite a posição da rainha:\n");
    scanf("%d", &rainha);

    printf("Movimentos da rainha oito casas para a esquerda:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    return 0;
}
