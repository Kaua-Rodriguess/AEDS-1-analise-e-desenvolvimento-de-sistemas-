/*!
2. Fazer uma função void mostrarParesEmOrdemDecrescente(int n) que recebe um número
 inteiro n e mostra na tela (em ordem decrescente) todos os valores menores que n para
 a sequência do exercicio anterior. A sua função mostrarParesEmOrdemDecrescente deve
 utilizar a função par desenvolvida na questão anterior.


 [tipo de retorno] [nome] ([lista de argumentos]) {
 return [variável de retorno]
 }
 */
#include <stdio.h>

int par(int num){
    return num*2;
}

void mostrarParesEmOrdemDecrescente(n){
    int parF=par(n);//chamei a função que pego o number da posição na sequencia
    int resultado;

    for(int i=n;i>0;i--){
    resultado= n/2;
    }

    printf("Ordem par descrescente: %d\n",resultado);
}

int main(){

    int v;//valor
    int resultadoPar;

    printf("digite um numero:");
    scanf("%d",&v);

    resultadoPar=par(v);

    mostrarParesEmOrdemDecrescente(v);

    return 0;
}

