/*!3. Faça um programa
para calcular o N-ésimo termo da sequência de Fibonacci
(1, 1, 2, 3,5, 8, 13, 21, ...)*/
#include <stdio.h>
int main()
{
    int n;
    int anterior = 0;
    int atual = 1;
    int proximo;

    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        printf("%d\n",anterior);
        proximo=anterior+atual;
        anterior = atual;
        atual = proximo;
    }




    return 0;
}
