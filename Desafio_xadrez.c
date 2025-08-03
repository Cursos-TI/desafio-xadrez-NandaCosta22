#include <stdio.h>

// Função recursiva para a Torre: 5 casas para a direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para a Rainha: 8 casas para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o Bispo: 5 casas na diagonal para cima e à direita
void moverBispo(int verticais, int horizontais) {
    if (verticais == 0) return;
    for (int h = 1; h <= horizontais; h++) {
        printf("Cima, Direita\n");
    }
    moverBispo(verticais - 1, horizontais);
}

int main() {
    int torre, bispo, rainha, cavalo;

    // Torre
    printf("Digite a posição da torre:\n");
    scanf("%d", &torre);

    printf("Movimentos possíveis da torre:\n");
    printf("Cima\n");
    printf("Baixo\n");
    printf("Esquerda\n");
    printf("Direita\n");

    printf("Movimentos da torre cinco casas para a direita:\n");
    moverTorre(5);

    // Bispo
    printf("\nDigite a posição do bispo:\n");
    scanf("%d", &bispo);

    printf("Movimentos do bispo cinco casas na diagonal para cima e à direita:\n");
    moverBispo(5, 1); // 5 verticais, 1 horizontal por movimento

    // Rainha
    printf("\nDigite a posição da rainha:\n");
    scanf("%d", &rainha);

    printf("Movimentos da rainha oito casas para a esquerda:\n");
    moverRainha(8);

    // Cavalo: duas casas para cima e uma para a direita, usando loops aninhados e controle de fluxo
    printf("\nDigite a posição do cavalo:\n");
    scanf("%d", &cavalo);

    printf("Movimentos do cavalo duas casas para cima e uma casa para a direita:\n");
    int movimentos = 1; // número de movimentos "L" a serem simulados
    for (int m = 1; m <= movimentos; m++) {
        int casasCima = 0;
        for (int i = 1; i <= 2; i++) { // duas casas para cima
            if (i == 2) {
                casasCima++;
                if (casasCima > 2) break;
            }
            printf("Cima\n");
        }
        int casasDireita = 0;
        int j = 1;
        while (j <= 1) { // uma casa para a direita
            casasDireita++;
            if (casasDireita > 1) break;
            printf("Direita\n");
            j++;
        }
    }

    return 0;
}
