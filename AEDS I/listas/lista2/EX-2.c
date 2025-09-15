/*
2. Contagem Regressiva - Faça um programa que exiba os números de 50 a 1 usando 
um laço while. Exemplo de saída: 50 - 49 - 48 - … 3 - 2 - 1. 
*/
#include <stdlib.h>
#include <stdio.h>

int main(){
    int i=50;
    while( i >= 1){
        printf("\n Valor: %d",i);
        i--;
    }

    return 0;
}