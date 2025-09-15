#include <stdlib.h>
#include <stdio.h>
int main()
{
    int numero,soma=0,somaPar=0,qtdPar=0,totalNum=0;
    float mediaPar;

    do
    {

        printf("\n Digite um numero:");
        scanf("%d",&numero);
        totalNum++;
        soma+=numero;


        if(numero % 2 == 0)
        {
            printf("%d e par",numero);
            somaPar+=numero;
            qtdPar++;
            printf("\nsomapar: %d",somaPar);
        }
        else
        {
            printf("%d e impar",numero);
        }



    }
    while(soma <= 500);

    printf("\nQuantidade de numeros digitados: %d",totalNum);

    if(qtdPar > 0)
    {
        mediaPar=(float)somaPar/qtdPar;
        printf("\nMedia dos numeros pares: %.2f",mediaPar);
    }
    else
    {
        printf("Nenhum numero par foi digitado.\n");
    }

    return 0;
}

