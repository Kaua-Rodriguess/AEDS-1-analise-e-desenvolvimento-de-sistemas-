/*Ler dois n�meros reais e salv�-los nas vari�veis A e B. Em seguida, troque os valores
 das duas vari�veis de forma que a vari�vel A passe a ter o valor da vari�vel B e
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

