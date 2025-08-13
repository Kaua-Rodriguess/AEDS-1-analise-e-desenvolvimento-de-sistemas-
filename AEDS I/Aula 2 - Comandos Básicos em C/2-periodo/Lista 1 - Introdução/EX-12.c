/*!
Exercício 12) Criar um programa que leia 4 números reais e exiba a sua média
ponderada, sabendo-se que os pesos são 2, 1, 3 e 4, nesta ordem.
*/

#include <stdio.h>
int main(){
    float n1,n2,n3,n4; //notas
    float mediaP,somaP,somaN; //mediaPonderada-somaDosPesos-somasDasNotas
    float peso1=2,peso2=1,peso3=3,peso4=4;//pesos das notas


    printf("Digite um numero:");
    scanf("%f",&n1);

    printf("Digite um numero:");
    scanf("%f",&n2);

    printf("Digite um numero:");
    scanf("%f",&n3);

    printf("Digite um numero:");
    scanf("%f",&n4);

    //mediaPonderada= soma das notas multiplicada por seus pesos/soma das notas
    //!multiplicação das notas pelos pesos
    somaP=(n1*peso1+n2*peso2+n3*peso3+n4*peso4);

    //!soma das notas
    somaN=n1+n2+n3+n4;

    mediaP=somaP/somaN;

    printf("A media ponderada e: %.2f",mediaP);




    return 0;
}
