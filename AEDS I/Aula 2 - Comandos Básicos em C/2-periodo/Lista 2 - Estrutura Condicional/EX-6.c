/*!
6. Faça um programa que leia um ano e determine se ele é bissexto.
*/

//!De quatro em quatro anos um fenômeno acontece no calendário: o Ano bissexto.
//!Esse é o nome dado para um ano que ganha um dia a mais, totalizando 366 dias
#include <stdio.h>
int main(){
    int ano;
    printf("ano:");
    scanf("%d",&ano);

    /*!para ser bissexto basta ele ser multiplo de 4, ou seja se o resta da divisão de um
    numero for igual a 0*/
    if(ano%4 == 0){
        printf(" %d e um ano bissexto",ano);
    }
    else{
        printf("%d nao e um ano bissexto",ano);
    }



    return 0;
}
