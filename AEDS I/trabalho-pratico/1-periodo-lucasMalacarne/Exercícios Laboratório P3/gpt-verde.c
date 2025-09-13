#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100

typedef struct {
    int codigo;
    char planta[51];
    float temp_atual, temp_min, temp_max;
} Estufa;

int main() {
    int n;
    Estufa estufa[MAX];

    scanf("%d", &n); // Lê a quantidade de estufas

    for (int i = 0; i < n; i++) {
        // Leitura dos dados
        scanf("%d", &estufa[i].codigo);            // Código da estufa
        getchar(); // consumir o \n ou espaço antes de fgets
        scanf(" %[^\n]", estufa[i].planta);        // Nome da planta com espaços
        scanf("%f %f %f", &estufa[i].temp_atual,   // Temperatura atual
                         &estufa[i].temp_min,      // Temperatura mínima ideal
                         &estufa[i].temp_max);     // Temperatura máxima ideal
    }

    for (int i = 0; i < n; i++) {
        float atual = estufa[i].temp_atual;
        float min = estufa[i].temp_min;
        float max = estufa[i].temp_max;
        int status = 0; // 0 = dentro da faixa, -1 = abaixo, 1 = acima
        float diff = 0.0, percent = 0.0;

        if (atual < min) {
            status = -1;
            diff = min - atual;
            percent = (diff / min) * 100;
        } else if (atual > max) {
            status = 1;
            diff = atual - max;
            percent = (diff / max) * 100;
        }

        // Exibe somente se estiver fora da faixa
        if (status != 0) {
            printf("Codigo: %d\n", estufa[i].codigo);
            printf("Planta: %s\n", estufa[i].planta);
            printf("Temperatura atual: %.1f\n", atual);
            printf("Intervalo ideal: %.1f a %.1f\n", min, max);
            printf("Status: Temperatura %s do ideal em %.1f°C ( %.1f%% )\n\n",
                   status == -1 ? "abaixo" : "acima", diff, percent);
        }
    }

    return 0;
}

