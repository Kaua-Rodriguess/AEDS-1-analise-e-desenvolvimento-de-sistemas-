/*
3. Função para calcular a soma de dois números 
Escreva uma função que receba dois números inteiros e retorne a soma deles.
*/
#include <stdio.h>

int soma(int a, int b){
    return a + b;
}
int main(){
    int n1, n2; 
    printf("Digite dois numeros inteiros: ");                     
    scanf("%d %d", &n1, &n2);                                      
    
    soma(n1,n2);
    printf("A soma de %d e %d eh: %d\n", n1, n2, soma(n1,n2));

    
    return 0;
}