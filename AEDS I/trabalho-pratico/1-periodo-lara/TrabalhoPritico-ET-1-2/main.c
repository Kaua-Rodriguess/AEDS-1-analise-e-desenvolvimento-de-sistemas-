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


    /*!Se errar, exibir uma mensagem indicando se o número secreto
     é maior ou menor do que a tentativa. */

     printf("\n Digite um numero: \n");
     scanf("%i",&tentativa);

         if(tentativa < numeroAleatorioAte10){
            printf("Tentativa : %i \n",tentativa);
            printf("O numero secreto e maior!\n");
         }

         if(tentativa > numeroAleatorioAte10){
            printf("Tentativa : %i \n",tentativa);
            printf("O numero secreto e menor!\n");
         }

      printf("\n Tentativa :");
      scanf("%i",&tentativa);
        if(tentativa == numeroAleatorioAte10){
            printf("\nParabens, voce acertou");
        }
        else{
            printf("\nAcabou os numeros de tentativas, voce perdeu!");
        }





         /*if (tentativa > numeroAleatorioAte10){
        printf("tentativa %d: %i esta errado \n O numero secreto e menor que %i",i,tentativa,tentativa);
    }

    else if(tentativa < numeroAleatorioAte10){

        printf("tentativa %d: %i esta errado \n O numero secreto e maior que %i",i,tentativa,tentativa);
    }
    else if(tentativa==numeroAleatorioAte10){
        printf(" tentativa %d: %i \n Vitoria voce acertou o numero, parabens!",i,tentativa);
    }

    else {
        printf("Errado!Voce tentou 3 vezes, O numero secreto era %i \n FIM do jogo!",numeroAleatorioAte10);
    }*/


    return 0;
}
