/*
1. Contagem Simples - Escreva um programa que exiba os números de 1 a 100 usando 
um laço for. Exemplo de saída: 1 - 2 - 3 - 4 - … 98 - 99 - 100. 
*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int n=100;
    for(int i=1;i<=n;i++){
        printf(" %d-",i);
    }

return 0;
}