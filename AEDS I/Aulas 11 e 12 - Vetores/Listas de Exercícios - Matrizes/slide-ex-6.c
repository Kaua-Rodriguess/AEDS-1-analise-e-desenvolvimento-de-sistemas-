/*!Ex 6: Soma dos Elementos de uma Matriz
 Enunciado
 Escreva um programa em C que declare uma matriz de inteiros
  com 3 linhas e 4 colunas. O programa deve solicitar que o
  usuário insira os valores para preencher a matriz. Em seguida,
  o programa deve calcular e exibir a soma de todos os elementos da matriz.

 Exemplo de saída
 Digite o valor para a
posição [0][0]: 2
 Digite o valor para a
posição [0][1]: 4
 ...
 A soma dos elementos da
matriz é: 50*/

#include <stdio.h>
int main()
{
    int linha,coluna;
    int matriz[3][4];//3linha e 4 colunas
    int soma=0;

      // Leitura dos valores
    for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                 printf("digite o valor para posicao [%d][%d]:",i,j);
                 scanf("%d",&matriz[i][j]);
            }
    }

    //fazer a parte comentada a mão depois





    /* Soma dos valores
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            soma += matriz[i][j];
        }
    }

    printf("A soma dos elementos da matriz é: %d\n", soma);*/



    return 0;
}



