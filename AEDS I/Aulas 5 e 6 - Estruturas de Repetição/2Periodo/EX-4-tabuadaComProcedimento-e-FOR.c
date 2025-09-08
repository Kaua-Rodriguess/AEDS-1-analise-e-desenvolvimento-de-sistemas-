/*
4. Tabuada - Pe�a um n�mero ao usu�rio e exiba a sua tabuada do 1 ao 10 usando while.
Exemplo de sa�da quando o n�mero lido � 2:
Tabuada do 2:
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
*/
#include <stdlib.h>
#include <stdio.h>

void tabuada(int n){
    int i=1;//esse "i" s� existe dentro do while
    while(i<=10){
        printf("\n %d x %d = %d",n,i,n*i);
        i++;
    }
    printf("\n");
}

int main(){

    for(int i=1;i<=100;i++){
        tabuada(i);//esse "i" s� existe dentro do for
    }

return 0;
}


