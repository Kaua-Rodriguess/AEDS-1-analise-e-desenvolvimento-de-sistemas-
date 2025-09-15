/*!Exercício 9) Escreva um programa onde serão fornecidos como entrada de dados dois
valores inteiros, calcule e imprima a soma, o produto, a diferença, o quociente destes
números.ESCREVER A MÃO  */

#include <stdio.h>
int main(){
    int n1,n2,soma,produto,diferenca,quociente;

    printf("Digite um numero:");
    scanf("%i",&n1);

    printf("\n Digite outro:");
    scanf("%i",&n2);

    soma=n1+n2;
    produto=n1*n2;
    diferenca=n1-n2;
    quociente=n1/n2;

    printf("\n Soma:%i \n produto:%i \n diferenca:%i \n quociente:%i",soma,produto,diferenca,quociente);



    return 0;
}

