/*!Exerc�cio 4) Crie um programa em C que troque os valores de duas vari�veis inteiras.
Instru��es:
1. Declare duas vari�veis inteiras, a e b, e atribua a elas valores diferentes.
2. Imprima os valores de a e b antes de qualquer modifica��o.
3. Utilize uma terceira vari�vel, auxiliar, para trocar os valores de a e b.
4. Imprima os novos valores de a e b ap�s a troca.*/
#include <stdio.h>

int main(){
    int a=1,b=2;
    int aux;

    printf("valor de a:%d\n valor de b:%d",a,b);

    aux=a;
    a=b;
    b=aux;

    printf("\n \n valor de a:%d\n valor de b:%d",a,b);

    return 0;
}
