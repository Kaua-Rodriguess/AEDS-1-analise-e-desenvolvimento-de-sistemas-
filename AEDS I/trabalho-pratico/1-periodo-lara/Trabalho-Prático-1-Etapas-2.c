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

    printf("\n====Bem-vindo ao jogo de adivinhacao=======\n");
    printf("Tente adivinhar o numero secreto entre 1 e 10\n");
    printf("Voce tem 3 tentativas!\n");

    /*!Se errar, exibir uma mensagem indicando se o número secreto
     é maior ou menor do que a tentativa. */

     do{
        printf("\nDigite um numero:");
        scanf("%i",&chute);
        tentativa++;

         if(chute < numeroAleatorioAte10){
            printf("Tentativa %i: %i \n",tentativa,chute);
            printf("O numero secreto e maior!\n");
         }

         else {
            printf("Tentativa %i: %i \n",tentativa,chute);
            printf("O numero secreto e menor!\n");
         }

//VERIFICO SE MEU NUMERO É MENOR OU MAIOR QUE O NUMERO SECRETO, MEU PROGRAMA ENCERRA QUANDO O NUMERO FOR IGUAL E TENTATIVA FOR=3    
     }while(chute != numeroAleatorioAte10 && tentativa <3);

     //AQUI EU PEGO O ULTIMO NUMERO QUE EU DIGITEI NA 3º TENTATIVA E COMPARO, SE ELE FOR IGUAL O PROGRAMA FALA QUE EU ACERTEI SE NÃO É POQUE MEU NUMERO DE TENTAIVAS ACABOU
        if(chute == numeroAleatorioAte10){
            printf("\nParabens, voce acertou o numero secreto era %d",numeroAleatorioAte10);
        }
        else{
           printf("\nAcabou os numeros de tentativas, voce perdeu! \n O numero secreto era %d",numeroAleatorioAte10);  
        }
     
    return 0;
}
