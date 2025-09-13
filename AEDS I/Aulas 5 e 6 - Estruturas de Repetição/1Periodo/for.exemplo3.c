/*!Tabuada do 7
Quero imprimir a tabuada do número 7.”
→ Isso significa: multiplicar 7 por 1 até 10 e mostrar os resultados.*/
#include <stdio.h>
int main()
{
    int multiplicador=7;

    for(int i=1; i<=10; i++)
    {
        int resposta=multiplicador*i;
        printf("%i x %i = %i \n",multiplicador,i,resposta);

    }






    return 0;
}
