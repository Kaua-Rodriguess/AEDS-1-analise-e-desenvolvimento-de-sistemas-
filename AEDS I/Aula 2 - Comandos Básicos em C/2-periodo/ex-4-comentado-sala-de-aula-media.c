
/*!ENTRADA: 3 notas
SAÍDA: some a média de 3 notas
*/

#include <stdio.h>
int main(){

    float n1,n2,n3,soma,media;

    printf("Escreva a nota1:\n");
    scanf("%f",&n1);

    printf("Escreva a nota2:\n");
    scanf("%f",&n2);

    printf("Escreva a nota3:\n");
    scanf("%f",&n3);

    soma=n1+n2+n3;

    media=soma/3;

    printf(" A soma das tres notas e: %.2f \n A media e: %.2f \n",soma,media);


    return 0;
}
