#include <stdio.h>
#include <stdlib.h>

int fibonacci(int p)//posição
{
    if(p<=2)//tratando meu caso base: Em fibonacci a posição 1º e  2º é igual a 1
    return 1;

    else
    {
        return fibonacci(p-1)+fibonacci(p-2);
    }

}

int main()
{
    int p;

    printf("Digite um numero:");
    scanf("%d",&p);

    printf("Fibonacci do numero %d e: %d",p,fibonacci(p));

    return 0;
}








