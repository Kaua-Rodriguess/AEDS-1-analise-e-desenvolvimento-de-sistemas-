
#include <stdio.h>
#include <stdlib.h>


int main (){
    int v1,v2,resultado;

   printf("Digite o valor 01:\n");
   scanf("%d",&v1);

   printf("Digite o valor 02:\n");
   scanf("%d",&v2);

   resultado = multiplicacao(v1,v2);

   printf("O resultado e:%d \n",resultado);

    return 0;
}

int multiplicacao(int n1,int n2)/*! diferente de void a minha função espera receber dois numeros inteiros*/
{
    int resultado;

    resultado= n1*n2;

    return(resultado);
}









