#include <stdio.h>
#include <stdlib.h>

int menu()
{   //!ETAPA 1
    int opcao;
    do{
        printf("\n =====SISTEMA DE JOGOS ONLINE=====\n");
        printf("1. Ranking Recursivo\n");
        printf("2. Registrar Pontua��o \n");
        printf("3. Estat�sticas de Partidas \n");
        printf("4. Simula��o de Decis�o T�tica \n");
        printf("5. Manipula��o de Dados com Ponteiros \n");
        printf("6. Registrar Jogadores em Arquivo \n");
        printf("7. Migrar Sistema para Struct\n");
        printf("8. Sair \n");
        scanf("%d",&opcao);

        if(opcao<1){
            printf("Digite uma opcao valida!!");
        }
    }while(opcao<8);

  return opcao;
}

int main()
{
    int op= menu();

    switch (op)
    {
        case 1:
        {

        }
        break;
        case 2:
        {

        }
        break;
        case 3:
        {

        }
        break;
        case 4:
        {

        }
        break;
        case 5:
        {

        }
        break;
        case 6:
        {

        }
        break;
        case 7:
        {
        }
        break;


    default:
        break;
    }

    return 0;
}
