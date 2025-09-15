/*
3. Soma dos Números - Leia um número inteiro n e exiba a soma de todos os números
de 1 até n usando um for.
*/
#include <stdlib.h>
#include <stdio.h>
int main(){
    int num,resultado,soma=0;

    printf("Digite um numero:");
    scanf("%d",&num);

for(int i=1;i<=num;i++){

printf("operacao:%d \n",soma=soma+i);
}

printf("soma de todos os numeros de 1 ate %d: %d",num,soma);


return 0;
}
