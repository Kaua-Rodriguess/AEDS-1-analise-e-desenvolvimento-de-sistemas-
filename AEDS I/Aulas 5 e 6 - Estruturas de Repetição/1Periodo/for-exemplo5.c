/*! Faça um programa para ler dois números inteiros e
 multiplicá-los sem utilizar a
operação de multiplicação

for (início; condição; incremento) {
     código que será repetido
}

*/
#include <stdio.h>
int main()
{
int n1,n2;

printf("que quero multiplicar:\n");//numero que quero multiplicar
scanf("%i",&n1);

printf("por:\n");// quantos vezes eu quero que o numero 1 repita
scanf("%i",&n2);

 int total=0;

for(int i=0;i<n2;i++){
        total+=n1;
}

printf("Resultado:%i\n",total);

return 0;
}
