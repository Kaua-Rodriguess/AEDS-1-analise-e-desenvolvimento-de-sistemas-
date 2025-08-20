/*!
9. Faça um programa que leia um caractere e determine se ele é uma vogal ou
consoante.
*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
//vogal: a e i o u consoante: o resto
char letra;

printf("Digite uma letra minuscula para saber se e uma consoante ou uma vogal:");
scanf("%c",&letra);

if(letra=='a' || letra=='e' ||  letra=='i' || letra=='o' || letra=='u'){
        printf(" %c  e uma vogal!!",letra);
}
else{
    printf("%c e uma consoante!",letra);
}





return 0;
}
