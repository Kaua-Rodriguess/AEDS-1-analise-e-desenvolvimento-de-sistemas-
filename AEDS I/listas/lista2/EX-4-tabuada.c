/*
4. Tabuada - Peça um número ao usuário e exiba a sua tabuada do 1 ao 10 usando while.
Exemplo de saída quando o número lido é 2:
Tabuada do 2:
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
*/
#include <stdlib.h>
#include <stdio.h>
int main(){
    int n,i=1;

    printf("Digite um numero:");
    scanf("%d",&n);

    while(i <= 10){

        printf(" %d x %d = %d \n",n,i,n*i);
        i++;
    }
return 0;
}

