/*

8. Fatorial - Solicite um número ao usuário e exiba seu fatorial usando um while. 
formula: n! = n * (n-1)!
*/
/*
#include <stdlib.h>
#include <stdio.h>
int main()
{
// 5!=5*(5-1)*(5-2)*(5-3)*(5-4)
//fatorial= numero- seu antecessor até 1  
int numero,fatorial=1;
int antecessor=1;

printf("Digite um numero para calcular o seu fatorial:");
scanf("%d",&numero);


while(antecessor <= numero){
    fatorial=fatorial*antecessor;
    antecessor++;   
    printf("fatorial: %d \n",fatorial); 
}



return 0;
}*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, fatorial, i;

    printf("Digite um numero para calcular o seu fatorial: ");
    scanf("%d", &numero);

    fatorial = numero;   // começa pelo próprio número
    i = numero - 1;      // começa do antecessor

    while(i > 0) {
        fatorial = fatorial * i;
        i--;
        
    }

   // printf("Fatorial de %d e: %d\n", numero,fatorial,fatorial);

    return 0;
}
