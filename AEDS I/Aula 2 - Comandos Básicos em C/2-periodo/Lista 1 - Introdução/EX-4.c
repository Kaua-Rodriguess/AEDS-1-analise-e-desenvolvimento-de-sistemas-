/*!Exercício 4) Crie um programa em C que troque os valores de duas variáveis inteiras.
Instruções:
1. Declare duas variáveis inteiras, a e b, e atribua a elas valores diferentes.
2. Imprima os valores de a e b antes de qualquer modificação.
3. Utilize uma terceira variável, auxiliar, para trocar os valores de a e b.
4. Imprima os novos valores de a e b após a troca.*/
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
