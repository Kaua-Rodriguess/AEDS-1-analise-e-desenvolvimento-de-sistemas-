/*!
12. Faça um programa que leia três números e verifique se eles formam um triângulo
válido.

a soma das medidas de quaisquer dois lados de um triângulo
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
            printf("não é um triangulo válido");
        }



return 0;
}
