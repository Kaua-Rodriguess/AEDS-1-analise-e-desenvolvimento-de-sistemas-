/* 
5. Leia um número inteiro I e um número real R. Enquanto I maior que 10, imprima o
 valor de I na tela, decremente o valor de I em duas unidades e enquanto R menor que
 10, imprima os valores de R e I na tela e incremente o valor de R em uma unidade.
 */
#include <stdio.h>

int main(){
    int i;
    float r;
    printf("digite dois valores:");
    scanf("%i %f",&i,&r);

    while(i>10)
    {
        printf("valor de i:%d",i);
        i-=2;
    }

    while(r<10)
    {
        printf("valor de i: %d \n valor de r:%1.f \n",i,r);
        r++;
    }

    /*while(i>10 && r>10){
        printf("%i\n",i);
        i-=2;
        printf("%i %1.f\n",i,r);
        r+=1;
    }*/

return 0;
}
