/*

8. Fatorial - Solicite um número ao usuário e exiba seu fatorial usando um while.
formula: n! = n * (n-1)!
*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
// 5!=5*(5-1)*(5-2)*(5-3)*(5-4)
//fatorial= numero- seu antecessor até 1
int numero;
int antecessor=1;

printf("%d!=");

while(antecessor>numero){
    numero=numero*(numero-antecessor);
    antecessor++;

    printf("%d*(%d-%d)",numero,numero,antecessor);

}




return 0;
}
