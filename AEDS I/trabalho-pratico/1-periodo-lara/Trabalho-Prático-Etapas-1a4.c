//! Gerando numero aleatório entre 1 e 10
//se eu uso "rand() % 10;" vai pegar o resto da divisao por 10, que são numeros de 0 a 9
//nesse programa eu quero os numeros de 0 a 10, por isso eu somo +1
//! ERROS A SEREM TRATADOS: quando eu acerto o numero, ele faz uma verificação se e menor ou não, ou seja
//! se o numero for 3 ele fala, esse numero é maior, e depois fala parabens vc acertou, tenho que arrumar um jeito para que quando ele acerte so fale que ele acertou sem verificar

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //!ETAPA 1
    srand(time(NULL));// inicializa o gerador de números aleatórios
    int nivel,chute,tentativa=0,pontos=100;

    printf("\n====Bem-vindo ao jogo de adivinhacao=======\n");
    printf("Tente adivinhar o numero secreto!\n");
    printf("\nPrimeiro escolha um numero para selecionar o nivel de dificuldade:\n");
    //!ETAPA 3- Níveis de Dificuldade
    printf("\n1-Facil(Numero entre 1 e 10, 5 tentativas)\n2-Medio(Numero entre 1 e 50, 7 tentativas)\n3-Dificil(Numero entre 1 e 100, 10 tentativas) \n DIGITE AQUI:");
    scanf("%d",&nivel);

    switch(nivel)
    {
    case 1:
    {
        printf("\n ->NIVEL FACIL:");
        int numeroAte10 = (rand() % 10)+1; //5 tentativas

        //!ETAPA 2-Número Aleatório e Múltiplas Tentativas
        //Exibi uma mensagem indicando se o número secreto é maior ou menor do que a tentativa.*/
        do
        {
            printf("\nDigite um numero:");
            scanf("%i",&chute);
            tentativa++;

            if(chute != numeroAte10) // só da a dica se estiver errado, se não mesmo estando certo ele compara se é maior ou menor
            {
                if(chute < numeroAte10)
                {
                    printf("Tentativa %i: %i \n",tentativa,chute);
                    printf("O numero secreto e MAIOR!\n");
                }

                else
                {
                    printf("Tentativa %i: %i \n",tentativa,chute);
                    printf("O numero secreto e MENOR!\n");
                }
            }

            //VERIFICO SE MEU NUMERO É MENOR OU MAIOR QUE O NUMERO SECRETO, MEU PROGRAMA ENCERRA QUANDO O NUMERO FOR IGUAL E TENTATIVA FOR=3
        }
        while(chute != numeroAte10 && tentativa <3);

        /*AQUI EU PEGO O ULTIMO NUMERO QUE EU DIGITEI NA 3º TENTATIVA E COMPARO,SE ELE FOR IGUAL AO NUMERO ALEATORIO O PROGRAMA
        FALA QUE EU ACERTEI, SE NÃO É POQUE MEU NUMERO DE TENTAIVAS ACABOU*/
        if(chute == numeroAte10)
        {
             //!ETAPA 4-Pontuação e Mensagens Finais
            printf("\nPARABENS, voce acertou o numero secreto era %d",numeroAte10);
            printf("\nSua pontuacao FINAL: %d pontos\n",pontos-(tentativa*10));//desconto de pontos

            if(tentativa <=2)
            {
                printf("\nExcelente! Voce e muito bom nisso!");
            }
            else
            {
                printf("\nBoa! Mas tente melhorar!");
            }
        }
        else
        {
            printf("\nTentativas acabaram,nao foi dessa vez! Tente novamente!");
            printf("\nO numero secreto era %d", numeroAte10);
        }

        break;
    }


    case 2:
    {
        printf("\n ->NIVEL MEDIO:");
        int numeroAte50 = (rand() % 50)+1; //7 tentativas
        do
        {
            printf("\nDigite um numero:");
            scanf("%i",&chute);
            tentativa++;

            if(chute != numeroAte50)
            {
                if(chute < numeroAte50 )
                {
                    printf("Tentativa %i: %i \n",tentativa,chute);
                    printf("O numero secreto e MAIOR!\n");
                }

                else
                {
                    printf("Tentativa %i: %i \n",tentativa,chute);
                    printf("O numero secreto e MENOR!\n");
                }
            }


        }
        while(chute != numeroAte50 && tentativa <7);

        //AQUI EU PEGO O ULTIMO NUMERO QUE EU DIGITEI NA TENTATIVA x E COMPARO, SE ELE FOR IGUAL O PROGRAMA FALA QUE EU ACERTEI, SE NÃO É POQUE MEU NUMERO DE TENTAIVAS ACABOU
        if(chute == numeroAte50)
        {
            printf("\nPARABENS, voce acertou o numero secreto era %d",numeroAte50);
            printf("\nSua pontuacao FINAL: %d pontos\n",pontos-(tentativa*10));//desconto de pontos

            if(tentativa <=4)
            {
                printf("\nExcelente! Voce e muito bom nisso!");
            }
            else
            {
                printf("\nBoa! Mas tente melhorar!");
            }
        }
        else
        {
            printf("\nTentativas acabaram,nao foi dessa vez! Tente novamente!");
            printf("\nO numero secreto era %d", numeroAte50);
        }

        break;
    }

    case 3:
    {
        printf("\n ->NIVEL DIFICIL:");
        int numeroAte100 = (rand() % 100)+1; //10 tentativas

        do
        {
            printf("\nDigite um numero:");
            scanf("%i",&chute);
            tentativa++;

            if(chute != numeroAte100)
            {
                if(chute < numeroAte100 )
                {
                    printf("Tentativa %i: %i \n",tentativa,chute);
                    printf("O numero secreto e MAIOR!\n");
                }

                else
                {
                    printf("Tentativa %i: %i \n",tentativa,chute);
                    printf("O numero secreto e MENOR!\n");
                }
            }
        }
        while(chute != numeroAte100 && tentativa <10);

        if(chute == numeroAte100)
        {
            printf("\nPARABENS, voce acertou o numero secreto era %d",numeroAte100);
            printf("\nSua pontuacao FINAL: %d pontos\n",pontos-(tentativa*10));//desconto de pontos

            if(tentativa <=5)
            {
                printf("\nExcelente! Voce e muito bom nisso!");
            }
            else
            {
                printf("\nBoa! Mas tente melhorar!");
            }
        }
        else
        {
            printf("\nTentativas acabaram,nao foi dessa vez! Tente novamente!");
            printf("\nO numero secreto era %d", numeroAte100);
        }

        break;
    }
    default:
    {
        printf("Opcao invalida!");
        break;
    }
    }

    return 0;
}
