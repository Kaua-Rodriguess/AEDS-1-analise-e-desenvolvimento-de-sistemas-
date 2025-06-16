/*!
2. Fazer uma função void mostrarParesEmOrdemDecrescente(int n) que recebe um número
 inteiro n e mostra na tela (em ordem decrescente) todos os valores menores que n para
 a sequência do exerc�cio anterior. A sua fun��o mostrarParesEmOrdemDecrescente deve
 utilizar a fun��o par desenvolvida na quest�o anterior.


 [tipo de retorno] [nome] ([lista de argumentos]) {
 return [variável de retorno]
 }
 */
#include <stdio.h>

int par(int n){
    return n*2;
}

void mostrarParesEmOrdemDecrescente(int n){
    int x=par(int n);
    for(i=0,i<x,i--){
        x/=2;
        printf("mostrar:",x);
    }


}      

int main(){



    return 0;
}

