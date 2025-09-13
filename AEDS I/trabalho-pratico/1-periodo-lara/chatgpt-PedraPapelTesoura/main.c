#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {]=

    int jogador, computador;

    srand(time(NULL));
    computador = rand() % 3; // 0=Pedra, 1=Papel, 2=Tesoura

    printf("=== Pedra (0), Papel (1) ou Tesoura (2) ===\n");
    printf("Sua escolha: ");
    scanf("%d", &jogador);

    printf("Computador escolheu: %d\n", computador);

    if(jogador == computador)
        printf("Empate!\n");
    else if((jogador == 0 && computador == 2) ||
            (jogador == 1 && computador == 0) ||
            (jogador == 2 && computador == 1))
        printf("Voce venceu!\n");
    else
        printf("Computador venceu!\n");

    return 0;
}
