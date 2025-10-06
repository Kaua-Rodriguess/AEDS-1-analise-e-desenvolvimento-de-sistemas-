#include <stdio.h>

// Função que acumula soma
int calculaSoma(int numero, int soma)
{
    soma += numero;   // acumula na soma
    return soma;      // retorna a soma atualizada
}

int main()
{
    int numero;
    int totalNum = 0;
    int soma = 0;

    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero < 0) break; // se for negativo, para imediatamente

        soma = calculaSoma(numero, soma);
        totalNum++;

    } while (soma <= 100);

    printf("Total de numeros lidos: %d\n", totalNum);
    printf("Soma final: %d\n", soma);

    return 0;
}
