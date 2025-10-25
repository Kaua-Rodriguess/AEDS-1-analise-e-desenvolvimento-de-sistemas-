#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int menu()
{   //!ETAPA 1 - MENU PRINCIPAL
    int opcao;
        printf("\n =====SISTEMA DE JOGOS ONLINE=====\n");
        printf("1. Ranking Recursivo\n");
        printf("2. Registrar Pontuacaoo \n");
        printf("3. Estatisticas de Partidas \n");
        printf("4. Simulacao de Decisao Tatica \n");
        printf("5. Manipulacao de Dados com Ponteiros \n");
        printf("6. Registrar Jogadores em Arquivo \n");
        printf("7. Migrar Sistema para Struct\n");
        printf("8. Sair \n");
        printf("Digite uma opcao:");
        scanf("%d",&opcao);

  return opcao;

}

int rankingRecursivo(int n);

int main(){   //==================FUNÇÃO PRINCIPAL==================
    setlocale(LC_ALL, "portuguese");
    
    int escolha;
    
    do{
        escolha=menu();

    switch(escolha){
        case 1:
        {
            //ETAPA 2 – Ranking Recursivo
            //receba como parâmetro o número de fases concluídas (n) e retorne a pontuação total. 

            printf("\n==================1. Ranking Recursivo escolhido==================\n");
            printf("- O jogador comeca com 100 pontos iniciais.\n");
            printf("- Jogador ganha um bonus de 50 pontos adicionais a cada 3 fases concluidas.\n");
            printf("- Cada fase concluida, o jogador ganha 100 pontos.\n");

            int n;//numero de fases concluidas
            printf("\nQuantas fases foram concluidas?:");
            scanf("%d",&n);
            printf("Pontuacao total: %d pontos!\n",rankingRecursivo(n));// retorne a pontuação total. 
            if(rankingRecursivo(n)<=300){
                printf("Esta so comecando!!\n");
            }
            else if(rankingRecursivo(n)>600)
            {
                printf("Incrivel, você dominou as fases!!\n");
            }
            else
            {
                printf("Bom desempenho!!\n");
            }

            break;
        }
        
        case 2:
        {
            //Etapa 3 – Registro de Pontuações (com Vetores)
            printf("\n==================2. Registro de pontuacao escolhido==================\n");
            int vetor[10];
            printf("Quantas fases o jogador concluiu?\n");
            break;
        }

        case 3:
        {
            printf("\n==================3. Estatísticas das partidas escolhidas ==================n");
            break;
        }

        case 4:
        {
            printf("\n==================4. Simulacao de Decisão Tatica escolhida ==================n");
            break; 
        }

        case 5:
        {
            printf("\n==================5. Manipulacao de Dados com Ponteiros escolhido ==================n");
            break; 
        }

        case 6:
        {
            printf("\n==================6. Registrar Jogadores em Arquivo escolhido ==================n");
            break; 
        }

        case 7:
        {
            printf("\n==================7. Migrar Sistema para Struct escolhido ==================n");
            break; 
        }
        
        case 8:
        {
            printf("Programa encerrado!!\n");
            break;
        }
    default:
    {
        printf("Digite uma opcao valida!! Digite um numero entre 1 e 8.\n");
        break;
    }
     }

    }  while(escolha != 8);
    

return 0;
}

//ETAPA 2 – Ranking Recursivo
//receba como parâmetro o número de fases concluídas (n) e retorne a pontuação total. 

int rankingRecursivo(int n){
    if(n == 1 ){
        return 200;
    }
    else if((n/3) == 0)//fases com bonus
    {
        return 100+50+rankingRecursivo(n-1);
    }
    else {//fases sem bonus
        return 100+rankingRecursivo(n-1);
    }
}