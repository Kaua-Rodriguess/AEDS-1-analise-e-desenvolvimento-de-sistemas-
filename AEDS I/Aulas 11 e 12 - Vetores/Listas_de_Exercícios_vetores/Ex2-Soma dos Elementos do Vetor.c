/*!
Exerc�cio 2: Soma dos Elementos do Vetor

 Enunciado:
 Escreva um programa em C que declare um vetor de 5 elementos inteiros.
 O programa deve ler 5 valores do usu�rio, armazen�-los no vetor e
 calcular a soma de todos os elementos.

 Digite o valor 1: 4
 Digite o valor 2: 8
 Digite o valor 3: 10
 Exemplo de sa�da
 Digite o valor 4: 2
 Digite o valor 5: 7
 A soma dos elementos do
vetor �: 31

*/
#include <stdio.h>
int main(){
  int vetor[5];
  int soma=0;
  
  for(int i=0;i<5;i++){
    printf("digite o valor %d:",i);
    scanf("%d",&vetor[i]);
}

for(int i=0;i<5;i++){
    soma+=vetor[i];
}
printf("A soma dos elementos do vetor é: %d\n", soma);


    return 0;
}
