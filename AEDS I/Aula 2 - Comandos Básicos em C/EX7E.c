/*Ler dois números reais e salvá-los nas variáveis A e B. Em seguida, troque os valores
 das duas variáveis de forma que a variável A passe a ter o valor da variável B e
 vice-versa. No final, mostre os valores finais.*/

#include <stdio.h>
int main(){
int a;
int b;

printf("valor de a e b:");
scanf("%i %i",&a, &b);

int temp=a; //guarda o valor original de a
a=b; //agora 'a' recebe o valor de 'b'
b=temp; // e 'b' recebe o valor de 'temp', que equivale

printf("valor de a e de b passou a ser:%i %i",a,b);

return 0;
}

