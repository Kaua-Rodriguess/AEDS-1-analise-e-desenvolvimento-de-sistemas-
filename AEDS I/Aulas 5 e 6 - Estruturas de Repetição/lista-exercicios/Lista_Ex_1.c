/*!
Lista 03- Repetição
1. Fazer um programa para ler n números inteiros e imprimir a soma deles. O n valor de
deve ser lido do teclado.
*/
#include <stdio.h>
int main()
{
    int n;//n é a minha repetiçãoo, entao i<n ou i até n

    printf("digite quantos numeros que vc quer somar:\n");
    scanf("%i",&n);

    int soma=0;// variavel somar os numero guardados
    int numero;//criei essa variavel para guardar os numeros que eu vou somar

    for(int i=0; i<n; i++)
    {
        printf("Digite um numero:");
        scanf("%i",&numero);

        soma+=numero; // Isso acontece a cada repetição, de forma "invisível"
    }

    //print o resultado da soma dos numeros digitados
    printf("Resultado:%i\n",soma);


    return 0;
}
