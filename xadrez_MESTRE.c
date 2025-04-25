#include <stdio.h>

// =======================
// Funções Recursivas
// =======================

// Função recursiva para a Torre
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o Bispo
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Função recursiva para a Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ==============================
// Movimento do Bispo com Loops
// ==============================

void moverBispoComLoops(int casas) {
    printf("\nMovimento do Bispo (com loops aninhados):\n");
    for (int linha = 0; linha < casas; linha++) {
        for (int coluna = 0; coluna < 1; coluna++) {
            printf("Cima Direita\n");
        }
    }
}

// =============================================
// Movimento complexo do Cavalo com loops aninhados
// =============================================

void moverCavaloComplexo(int movimentos) {
    printf("\nMovimento do Cavalo (duas casas para Cima, uma para Direita):\n");

    int movimentosFeitos = 0;

    for (int i = 0; i < movimentos; i++) {
        int casaAtual = 0;

        // Loop interno para movimentar 3 casas (2 para cima, 1 para direita)
        for (int passo = 0; passo < 3; passo++) {
            if (passo < 2) {
                printf("Cima\n");
            } else {
                // Condição extra para simular erro ou lógica condicional
                if (i == 1 && passo == 2) {
                    printf("Movimento interrompido\n");
                    break;
                }

                printf("Direita\n");
            }

            casaAtual++;
            if (casaAtual > 3) {
                continue; // Nunca deve ser chamado, mas está aqui como exemplo de controle
            }
        }

        movimentosFeitos++;
        if (movimentosFeitos >= movimentos) {
            break;
        }
    }
}

// =======================
// Função principal
// =======================

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 2;

    // -------------------------------
    // Movimentação da Torre (recursiva)
    // -------------------------------
    printf("Movimento da Torre (recursivo - %d casas para Direita):\n", casasTorre);
    moverTorre(casasTorre);

    // -------------------------------
    // Movimentação do Bispo (recursiva)
    // -------------------------------
    printf("\nMovimento do Bispo (recursivo - %d casas em diagonal Cima Direita):\n", casasBispo);
    moverBispoRecursivo(casasBispo);

    // -------------------------------
    // Movimentação do Bispo (loops aninhados)
    // -------------------------------
    moverBispoComLoops(casasBispo);

    // -------------------------------
    // Movimentação da Rainha (recursiva)
    // -------------------------------
    printf("\nMovimento da Rainha (recursivo - %d casas para Esquerda):\n", casasRainha);
    moverRainha(casasRainha);

    // -------------------------------
    // Movimentação do Cavalo (loops complexos)
    // -------------------------------
    moverCavaloComplexo(movimentosCavalo);

    return 0;
}
