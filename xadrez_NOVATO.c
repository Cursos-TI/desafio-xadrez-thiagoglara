#include <stdio.h>

int main() {
    // Quantidade de casas para cada movimento
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    // Simulação do movimento da Torre com estrutura FOR
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }

    // Simulação do movimento do Bispo com estrutura WHILE
    printf("\nMovimento do Bispo (5 casas na diagonal para Cima e Direita):\n");
    int contadorBispo = 0;
    while (contadorBispo < movimentoBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Simulação do movimento da Rainha com estrutura DO-WHILE
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentoRainha);

    return 0;
}
