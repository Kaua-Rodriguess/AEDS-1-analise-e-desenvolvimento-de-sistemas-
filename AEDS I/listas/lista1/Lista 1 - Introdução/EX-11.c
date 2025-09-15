/*!
Exercício 11) Escreva um programa que pergunte qual o tempo transcorrido em um
cronômetro em horas, minutos e segundos e transforme (e mostre) todo este tempo em
segundos.
*/

#include <stdio.h>
int main(){
    int h,min,seg;

    printf("Qual o tempo percorrido em: \n Horas:");
    scanf("%i",&h);

    printf("Minutos:");
    scanf("%i",&min);

    printf("Segundos:");
    scanf("%i",&seg);

    //1hora=3.600segundos
    h*=3600;

    //1minutos=60segundo
    min*=60;

    int segTotais=h+min+seg;

    printf("o tempo inserido em segundos e: %i segundos",segTotais);

    return 0;
}
