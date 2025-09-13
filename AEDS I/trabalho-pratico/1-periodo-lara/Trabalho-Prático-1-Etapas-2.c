  //! Gerando numero aleatório entre 1 e 10
    //se eu uso "rand() % 10;" vai pegar o resto da divisao por 10, que são numeros de 0 a 9
    //nesse programa eu quero os numeros de 0 a 10, por isso eu somo +1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  
    srand(time(NULL));
    int numeroAleatorioAte10 = (rand() % 10)+ 1;//numeros de 0 a 10, por isso eu somo +1
    int tentativa=0;
    int chute;

    printf("Bem-vindo ao jogo de adivinhacao \n");
    printf("Tente adivinhar o numero secreto entre 1 e 10\n");

    /*!Se errar, exibir uma mensagem indicando se o número secreto
     é maior ou menor do que a tentativa. */

     do{
        printf("\n Digite um numero: \n");
        scanf("%i",&chute);

         if(chute < numeroAleatorioAte10){
            //printf("Tentativa : %i \n",tentativa);
            printf("O numero secreto e maior!\n");
         }

         else if(tentativa > numeroAleatorioAte10){
            //printf("Tentativa : %i \n",tentativa);
            printf("O numero secreto e menor!\n");
         }

        else if(tentativa == numeroAleatorioAte10){
            printf("\nParabens, voce acertou");
        }
        else{
            printf("\nAcabou os numeros de tentativas, voce perdeu!");
        }

     }while();
     
    return 0;
}
