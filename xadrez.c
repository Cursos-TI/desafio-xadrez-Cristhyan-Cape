#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorreRecursivo(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorreRecursivo(casas - 1);
    }
}

// Função recursiva para o movimento do Bispo
void moverBispoRecursivo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        moverBispoRecursivo(casas - 1);
    }
}

// Função recursiva para o movimento da Rainha
void moverRainhaRecursivo(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainhaRecursivo(casas - 1);
    }
}

int main() {
    // Movimento da Torre (usando recursão)
    printf("Movimento da Torre (Recursivo):\n");
    int casas_torre = 5;
    moverTorreRecursivo(casas_torre);
    printf("\n");

    // Movimento do Bispo (usando recursão e loops aninhados)
    printf("Movimento do Bispo (Recursivo e Loops Aninhados):\n");
    int casas_bispo_vertical = 5;
    for (int i = 0; i < casas_bispo_vertical; i++) {
        for (int j = 0; j < 1; j++) { // Loop interno para movimento horizontal (diagonal direita)
            printf("Cima, Direita\n");
        }
    }
    printf("\n");

    // Movimento da Rainha (usando recursão)
    printf("Movimento da Rainha (Recursivo):\n");
    int casas_rainha = 8;
    moverRainhaRecursivo(casas_rainha);
    printf("\n");

    // Movimento do Cavalo (usando loops aninhados complexos)
    printf("Movimento do Cavalo (Loops Aninhados Complexos - Cima e Direita em L):\n");
    int movimentos_cavalo = 1; // Controla quantas vezes o movimento em L será realizado

    for (int m = 0; m < movimentos_cavalo; m++) {
        for (int cima = 0; cima < 2; cima++) {
            printf("Cima\n");
        }
        for (int direita = 0; direita < 1; direita++) {
            printf("Direita\n");
        }
    }
    printf("\n");

    return 0;
}
