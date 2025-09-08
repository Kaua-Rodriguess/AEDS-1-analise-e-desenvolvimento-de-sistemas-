/*!
17. Fa�a um programa que leia tr�s n�meros inteiros e informe se ao menos um deles
� par.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1,n2,n3;
    printf("Digite 3 numeros:\n");
    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1 % 2 == 0 && n2 % 2 == 0 && n3 % 2 == 0){
        printf("Todos sao pares!");
    }
    else if(n1 % 2==0){
        printf("dentre os numeros %d %d %d, %d e par!",n1,n2,n3,n1);
    }
    else if(n2 % 2==0){
        printf("dentre os numeros %d-%d-%d, %d e par!",n1,n2,n3,n2);
    }
    else if(n3 % 2==0){
        printf("dentre os numeros %d-%d-%d, %d e par!",n1,n2,n3,n3);
    }





    return 0;
}
