#include <stdio.h> 
 
// Função que calcula o fatorial 
long fatorial(int n) { 
    long resultado = 1; 
    for(int i = 1; i <= n; i++) { 
        resultado *= i; 
    } 
    return resultado; 
} 
 
int main() { 
    int num; 
    long resultado; 
 
    printf("Digite um número inteiro nao-negativo: "); 
    scanf("%d", &num); 
 
    if(num < 0) { 
        printf("Erro: número negativo não tem fatorial.\n"); 
    } else { 
        resultado = fatorial(num); 
        printf("O fatorial de %d é %ld\n", num, resultado); 
    } 
 
    return 0;
}