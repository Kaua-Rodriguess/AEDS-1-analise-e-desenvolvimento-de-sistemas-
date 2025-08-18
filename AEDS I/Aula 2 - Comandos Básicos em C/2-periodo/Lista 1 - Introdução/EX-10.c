/*!Exercício 10) Escreva um programa que leia uma temperatura em graus Farenheit e a
imprima em graus Centígrados. A conversão de graus Farenheit para Centígrados é
obtida por C=(5/9)(F-32). */

#include <stdio.h>
int main(){
    float f,c;

    printf("Qual a temperatura agora em Farenheit:");
    scanf("%f",&f);

    //convertendo a temperatura
    c=(5.0/9.0)*(f-32);
    printf("Temperatura em Centigrados e: %.4f",c);


    return 0;
}
