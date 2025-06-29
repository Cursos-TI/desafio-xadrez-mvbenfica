#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    const int movTorre = 5;
    const int movBispo = 5;
    const int movRainha = 8;

    int i;
    int passo;

    printf("Movimento da Torre (FOR):\n");
    for (i = 1; i <= movTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }
    printf("\n");

    printf("Movimento do Bispo (WHILE):\n");
    passo = 1;
    while (passo <= movBispo) {
        printf("Casa %d: Cima, Direita\n", passo);
        passo++;
    }
    printf("\n");

    printf("Movimento da Rainha (DO-WHILE):\n");
    passo = 1;
    do {
        printf("Casa %d: Esquerda\n", passo);
        passo++;
    } while (passo <= movRainha);

    return 0;
}
