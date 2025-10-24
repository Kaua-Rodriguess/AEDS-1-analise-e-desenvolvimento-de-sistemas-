#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int menu()
{   //!ETAPA 1
    int opcao;
        printf("\n =====SISTEMA DE JOGOS ONLINE=====\n");
        printf("1. Ranking Recursivo\n");
        printf("2. Registrar Pontuacaoo \n");
        printf("3. Estatísticas de Partidas \n");
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

int main(){
    setlocale(LC_ALL, "portuguese");
    
    int escolha;
    
    do{
        escolha=menu();//criei uma variavel com o mesmo nome

    switch(escolha){
        case 1:
        {
            printf("\n====1. Ranking Recursivo escolhido====\n");
            int n=0;//numero de fases concluidas
            printf("\nQuantas fases foram concluidas?:");
            scanf("%d",&n);
            printf("Pontuacao total: %d pontos!\n",rankingRecursivo(n));// retorne a pontuação total. 
            break;
        }
        
        case 2:
        {
            //Etapa 3 – Registro de Pontuações (com Vetores)
            int vetor[10];
            printf("Quantas fases o jogador concluiu?");
            break;
        }
        
        case 8:
        {
            printf("Programa encerrado!!\n");
            break;
        }
    default:
    {
        printf("Digite uma opção válida!! Digite um número entre 1 e 8.\n");
        break;
    }
     }

    }  while(escolha != 8);
    

return 0;
}

//Etapa 2 – Ranking Recursivo
//receba como parâmetro o número de fases concluídas (n) e retorne a pontuação total. 
int rankingRecursivo(int n){
    if(n == 1 ){
        return 100;
    }
    else {

        return 100+rankingRecursivo(n-1);
    }
}