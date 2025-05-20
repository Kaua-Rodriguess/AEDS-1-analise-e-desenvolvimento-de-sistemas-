
#include <stdio.h>

int encontrarMaior(int *matriz, int linhas, int colunas) {
    int maior = *matriz;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            int valorAtual = *(matriz + i * colunas + j);
            if (valorAtual > maior) {
                maior = valorAtual;
            }
        }
    }

    return maior;
}

int main() {
    int matriz[3][4] = {
        {1, 5, 3, 4},
        {7, 2, 13, 6},
        {0, 9, 11, -2}
    };

    int maior = encontrarMaior(&matriz[0][0], 3, 4);

    printf("Maior valor da matriz: %d\n", maior);

    return 0;
}


