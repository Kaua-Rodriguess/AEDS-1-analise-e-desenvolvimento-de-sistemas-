/*! 2. Fazer um programa para ler dois números inteiros e calcular e imprimir a diferença desses
 numeros. Depois, se o segundo número for diferente de zero, fazer a divisao do primeiro
 pelo segundo.
 1-ler dois números inteiros
 2-calcular e imprimir a diferen�a desses n�meros
 3-se o segundo n�mero for diferente de zero, fazer a divis�o do primeiro
 pelo segundo.

 */
#include <stdio.h>

int main(){

int a,b;
printf("Digite dois numeros:");
scanf("%d %d",&a,&b);

if(a>b){
        int diferenca=a-b;
        printf ("Diferenca:%d",diferenca);

}
else if(b>a){
    int diferenca=b-a;
        printf ("Diferenca:%d\n",diferenca);
}
else
{
    printf("os numeros sao iguais:%d",a);
}

if(b!=0)
{
    int divisao = a/b;
    printf("\n divisao:%d",divisao);
}



return 0;
}
