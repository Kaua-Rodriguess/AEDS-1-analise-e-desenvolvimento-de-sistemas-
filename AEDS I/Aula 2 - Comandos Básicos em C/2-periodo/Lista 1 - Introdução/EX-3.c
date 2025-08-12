/*!
Exercício 3) Crie um programa em C que realize as seguintes ações:
1. Declare uma variável inteira numero e inicialize-a com o valor 7.
2. Declare uma segunda variável inteira dobro e armazene nela o resultado de
numero multiplicado por 2.
3. Imprima o valor de numero e dobro na tela, um em cada linha.
*/
#include <stdio.h>

int main(){
    int numero=7;
    int dobro=numero*2;

    printf("O numero e: %d \n O dobro e: %d",numero,dobro);

    return 0;
}
