/*
6. Média de Números - Peça ao usuário para inserir 5 números e calcule a média desses
números usando do while.
*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int n, i = 1, soma = 0;
    float media;

    printf("\n Digite 5 numeros para calcular sua media:\n");

    while (i <= 5)
    {
        printf("(Numero%d):", i);
        scanf("%d", &n);

        soma = soma + n; // armazenando a soma das notas.

        i++;
    }

    media = soma / 5;

    printf("media:%.2f", media);

    return 0;
}