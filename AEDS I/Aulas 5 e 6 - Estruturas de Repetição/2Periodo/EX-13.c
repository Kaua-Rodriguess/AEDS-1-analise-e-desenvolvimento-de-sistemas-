/*!
13. N�meros Pal�ndromos - Pe�a um n�mero inteiro e verifique se ele � um pal�ndromo
(exemplo: 121, 1331) usando um while.
*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
    //! exemplo: 12321
    int numero,temp,invertido=0,digito;
    printf("numero:");
    scanf("%d",&numero);

    temp=numero;

    while(temp > 0){
        digito = temp % 10;
        printf("\ndigito:%d\n",digito);
        invertido = invertido * 10 + digito; //resto da divis�o de numero -> 12321 % 10 =1-2-3-2-1
        printf("\ninvertido:%d\n",invertido);
        temp = temp /10; //divis�o inteira -> 1232,1 -> 123,2 -> 12,3 -> 1,2 -> 0,1 -> 0 paro o while
        printf("\ntemp:%d\n",temp);

    }
    if(invertido == numero){
        printf("e palindromo");
    }
    else{
        printf("nao e palindromo");
    }


    return 0;
}
