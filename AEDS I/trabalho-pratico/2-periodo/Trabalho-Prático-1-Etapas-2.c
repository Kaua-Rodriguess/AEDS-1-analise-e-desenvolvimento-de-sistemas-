#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //!gerando numero aleatório entre 1 e 10
    //se eu uso "rand() % 10;" vai pegar o resto da divisao por 10, que são numeros de 0 a 9
    //nesse programa eu quero os numeros de 0 a 10, por isso eu somo +1
    srand(time(NULL));
    int numeroAleatorioAte10 = (rand() % 10)+ 1;

    int tentativa;

    printf("Bem-vindo ao jogo de adivinhacao \n");
    printf("Tente adivinhar o numero secreto entre 1 e 10\n");
    printf("\n Digite sua tentativa:");
    scanf("%i",&tentativa);

    /*!Se errar, exibir uma mensagem indicando se o número secreto
     é maior ou menor do que a tentativa. */
    if (tentativa > numeroAleatorioAte10){
        printf("tentativa 1: %i \n O numero secreto e menor que %i",tentativa,tentativa);

        printf("\n Digite sua tentativa:");
        scanf("%i",&tentativa);

    }

    else if(tentativa < numeroAleatorioAte10){
        printf("tentativa 2: %i \n O numero secreto e maior que %i",tentativa,tentativa);

        printf("\n Digite sua tentativa:");
        scanf("%i",&tentativa);

    }
    else if(tentativa==numeroAleatorioAte10){
        printf(" tentativa 3: %i \n Vitoria voce acertou o numero, parabens!",tentativa);
    }

    else {
        printf("Errado! O numero secreto era %i \n FIM do jogo!",numeroAleatorioAte10);
    }
    return 0;
}
