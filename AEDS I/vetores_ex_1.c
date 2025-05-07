/*
1) Faça um programa que:
- Defina um vetor com 6 posições
- Atribua os valores
1,0,5,-2,-5,7

Armazena numa variável a soma dos elementos das posições: 0,1,5

- Modifique o elemento da posição 4 para 10

mostre na tela os elementos do vetor
 */

 #include <stdio.h>
 int main(){
     int v[6]={1,0,5,-2,-5,7}; //declarei uma variavel v, e essa variavel é um vetor[] que possui 6 espaços, e os numeros ocupados nessas posiçoes são: 1,0,5,-2,-5,7
     //for(inicialização,condição de parada,incremento)
     /*não confunda, o vetor sempre começa do 0, no exemplo acima, meu vetor tem 6posições {0,1,2,3,4,5}, então no meu for ou eu coloco i<6 ou i<=5, pq se colocar
      que é =6 eu vou contabilizar 7 casas*/
     int soma=v[0]+v[1]+v[5];
     printf("soma:%d",soma);








     for(int i=0;i<6;i++){
        printf("%d\n",v[i]); //v[i] estou acessando as posições do vetor v na variavel i do for
}




 return 0;
 }
