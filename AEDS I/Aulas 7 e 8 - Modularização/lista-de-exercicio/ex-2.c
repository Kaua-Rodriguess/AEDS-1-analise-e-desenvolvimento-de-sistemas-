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

int par(int n){
    return n*2;
}


void mostrarParesEmOrdemDecrescente(int n){
    int x=par(n);
    for(int i=x;i>0;i--){
        if(x%2==0){
            printf("mostrar:%d",x);
        }
    }
}      

int main(){
    
    int num;
    printf("digite um numero:");
    scanf("%d",&num);
    
    mostrarParesEmOrdemDecrescente(num);
    
    
    
    
    

    return 0;
}

