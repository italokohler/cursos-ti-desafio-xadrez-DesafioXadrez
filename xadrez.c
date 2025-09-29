#include <stdio.h>

int main() {
    // =========================
    // Declaração das variáveis
    // =========================
    int i;                  // Variável de controle do loop
    int casasTorre = 5;     // Quantidade de casas para a Torre
    int casasBispo = 5;     // Quantidade de casas para o Bispo
    int casasRainha = 8;    // Quantidade de casas para a Rainha

    // =======================================================
    // Movimentação da TORRE (usando for)
    // =======================================================
    printf("=== Movimento da Torre ===\n");
    // Torre se move 5 casas para a direita
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // =======================================================
    // Movimentação do BISPO (usando while)
    // =======================================================
    printf("\n=== Movimento do Bispo ===\n");
    // Bispo se move 5 casas na diagonal para cima e direita
    i = 1; // Reiniciando a variável
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // =======================================================
    // Movimentação da RAINHA (usando do-while)
    // =======================================================
    printf("\n=== Movimento da Rainha ===\n");
    // Rainha se move 8 casas para a esquerda
    i = 1; // Reiniciando a variável
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    return 0;
}
