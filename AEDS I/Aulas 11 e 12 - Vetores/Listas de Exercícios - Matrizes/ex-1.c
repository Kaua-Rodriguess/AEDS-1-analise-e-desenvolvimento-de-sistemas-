/*!A declara��o de matrizes obedece a mesma sintaxe que a
declara��o de vetores, exceto pela adi��o de uma nova
dimens�o escrita entre colchetes[ ].
 tipo vari�vel[linhas][colunas];

 int [4][10]

  4 linhas e 10 colunas

  int 10[][][][][][][][][][]
  int 10[][][][][][][][][][]
  int 10[][][][][][][][][][]
  int 10[][][][][][][][][][]

percorrer os elementos de uma matriz,necess�rias duas
estruturas de repeti��o for, uma dentro da outra.
 O for externo percorre
as linhas da matriz, o for interno percorre as colunas de uma
determinada linha que est� fixada pelo for externo. Por exemplo, para
imprimir todos os elementos de uma matriz 4x10, linha por linha:

 */

 #include <stdio.h>
int main()
{
int linha,coluna;
int matriz[4][10];

for(linha=0;linha<4;linha++){
        for(coluna=0;coluna<10;coluna++){
            printf("%d",matriz[linha][coluna]);
        }
        printf("\n");
}




return 0;
}



