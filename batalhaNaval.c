#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define NAVIO 3

void posicionarNavio(int tabuleiro[LINHAS][COLUNAS], int navio[][2], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        int x = navio[i][0];
        int y = navio[i][1];
        tabuleiro[x][y] = NAVIO;
    }
}

void imprimirTabuleiro(int tabuleiro[LINHAS][COLUNAS]) {
    printf("  ");
    for (int i = 1; i <= COLUNAS; i++) {
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 0; i < LINHAS; i++) {
        printf("%c ", 'A' + i);
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[LINHAS][COLUNAS] = {0};

    int navio1[3][2] = {{0, 1}, {1, 1}, {2, 1}}; // A2, B2, C2
    int navio2[3][2] = {{4, 3}, {4, 4}, {4, 5}}; // E4, E5, E6

    posicionarNavio(tabuleiro, navio1, 3);
    posicionarNavio(tabuleiro, navio2, 3);

    printf("Coordenadas do Navio Vertical:\n");
    for (int i = 0; i < 3; i++) {
        printf("(%c, %d)\n", 'A' + navio1[i][0], navio1[i][1] + 1);
    }

    printf("\nCoordenadas do Navio Horizontal:\n");
    for (int i = 0; i < 3; i++) {
        printf("(%c, %d)\n", 'A' + navio2[i][0], navio2[i][1] + 1);
    }

    printf("\nTabuleiro:\n");
    imprimirTabuleiro(tabuleiro);

    return 0;

    printf("novo commit/n");


}