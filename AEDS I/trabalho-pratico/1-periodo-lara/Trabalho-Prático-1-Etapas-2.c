  //! Gerando numero aleatório entre 1 e 10
    //se eu uso "rand() % 10;" vai pegar o resto da divisao por 10, que são numeros de 0 a 9
    //nesse programa eu quero os numeros de 0 a 10, por isso eu somo +1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //ETAPA 1
    srand(time(NULL));
    int numeroAleatorioAte10 = (rand() % 10)+ 1;//numeros de 0 a 10, por isso eu somo +1
    int chute,tentativa=0,nivel;
    

    printf("\n====Bem-vindo ao jogo de adivinhacao=======\n");
    printf("Tente adivinhar o numero secreto!\n");
    printf("Primeira escolha um numero para o selecionar o nivel de dificuldade:\n");
    printf("1-Fácil (Número entre 1 e 10, 5 tentativas)\n
            2-Médio (Número entre 1 e 50, 7 tentativas)\n
            3-Difícil (Número entre 1 e 100, 10 tentativas)");
    scanf("%d",&nivel);

    switch(nivel){
        case 1:{
            printf("\n ->NIVEL FACIL:");
            int numeroAte10 = (rand() % 10)+1; //5 tentativas

              //ETAPA 2-Número Aleatório e Múltiplas Tentativas
     //Exibi uma mensagem indicando se o número secreto é maior ou menor do que a tentativa.*/ 
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
     //ETAPA 3- Níveis de Dificuldade

            break
        }
        case 2:{
            printf("\n ->NIVEL MEDIO:");
            int numeroAte50 = (rand() % 50)+1; //7 tentativas

              //ETAPA 2-Número Aleatório e Múltiplas Tentativas
     //Exibi uma mensagem indicando se o número secreto é maior ou menor do que a tentativa.*/ 
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
     //ETAPA 3- Níveis de Dificuldade
     
            break
        }
        
        case 3:{
            printf("\n ->NIVEL DIFICIL:");
            int numeroAte30 = (rand() % 100)+1; //10 tentativas

              //ETAPA 2-Número Aleatório e Múltiplas Tentativas
     //Exibi uma mensagem indicando se o número secreto é maior ou menor do que a tentativa.*/ 
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
     //ETAPA 3- Níveis de Dificuldade
           break
        }
    }





   


    return 0;
}
