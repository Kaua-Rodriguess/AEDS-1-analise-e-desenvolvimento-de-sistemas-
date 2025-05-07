/*Estrutura sequencial: ler os valores dos catetos de um triângulo retângulo
   e mostrar a hipotenusa */
#include <stdio.h>
#include <math.h>

int main(){
     // Um triângulo retângulo possui três lados: hipotenusa (maior) e dois catetos
    float b,c;

printf("valor do cateto b:");
scanf("%f",&b);

printf("valor do cateto c:");
scanf("%f",&c);

float a=sqrt(pow(b,2)+pow(c,2));

printf("valor da hippotenusa:%.2f",a);


return 0;
}
