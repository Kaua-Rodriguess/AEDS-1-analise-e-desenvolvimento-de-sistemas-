/*!
12. Fa�a um programa que leia tr�s n�meros e verifique se eles formam um tri�ngulo
v�lido.

a soma das medidas de quaisquer dois lados de um tri�ngulo
deve ser sempre maior que a medida do terceiro lado
a+b>c
a+c>b
b+c>a
b+a>c
c+a>b
c+b>a */

#include <stdlib.h>
#include <stdio.h>
int main()
{
    int a,b,c;

    printf("");
    scanf("%i %i %i",&a,&b,&c);

    if(a+b>c &&
       a+c>b &&
       b+c>a &&
       b+a>c &&
       c+a>b &&
       c+b>a ){
        printf("e um tringulo que atende os criterios para a existencia!");
    }
        else{
            printf("n�o � um triangulo v�lido");
        }



return 0;
}
