#include <stdio.h>

int main() {
    // Quantidade de casas para cada movimento
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    // ==============================
    // Movimentação da TORRE com for
    // ==============================
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }

    // ===============================
    // Movimentação do BISPO com while
    // ===============================
    printf("\nMovimento do Bispo (5 casas na diagonal para Cima e Direita):\n");
    int contadorBispo = 0;
    while (contadorBispo < movimentoBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // =====================================
    // Movimentação da RAINHA com do-while
    // =====================================
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentoRainha);

    // ===================================
    // Movimentação do CAVALO com loops aninhados
    // ===================================
    // Simulando um movimento do Cavalo: 2 casas para baixo e 1 para a esquerda
    // Usando um loop for (externo) e um loop while (interno)
    printf("\nMovimento do Cavalo (2 casas para Baixo e 1 casa para Esquerda):\n");

    int movimentosL = 1; // número de movimentos completos do cavalo que serão simulados
    for (int i = 0; i < movimentosL; i++) {
        // Loop interno para as 2 casas para baixo
        int passosBaixo = 0;
        while (passosBaixo < 2) {
            printf("Baixo\n");
            passosBaixo++;
        }

        // Após descer 2 casas, mover 1 para a esquerda
        printf("Esquerda\n");
    }

    return 0;
}
