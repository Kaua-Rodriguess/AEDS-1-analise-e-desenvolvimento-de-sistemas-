#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero, chute, tentativas = 0;

    srand(time(NULL)); // gera número aleatório
    numero = rand() % 100 + 1; // número entre 1 e 100

    printf("=== Jogo da Adivinhacao ===\n");

    do {
        printf("Digite um numero (1 a 100): ");
        scanf("%d", &chute);
        tentativas++;

        if(chute > numero)
            printf("Numero e menor!\n");
        else if(chute < numero)
            printf("Numero e maior!\n");
        else
            printf("Parabens! Voce acertou em %d tentativas!\n", tentativas);

    } while(chute != numero);

    return 0;
}
