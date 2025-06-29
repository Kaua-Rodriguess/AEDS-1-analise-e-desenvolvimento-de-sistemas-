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
//função que retorna o numero da posição escolhida
int par(int num){
    return num*2;
}

//função que mostra os numeros em ordem descrescente
void mostrarParesEmOrdemDecrescente( int n){
    printf("Pares em ordem descrescente:\n");

    for(int i=n;i>=1;i--){
        int valor= par(i);// pego o number da posição na sequencia
        printf("%d \n",valor);//mostra o valor
    }
      printf("\n");
}

int main(){

    int v;//valor

    printf("Digite a quantidade de termos da sequencia de pares que deseja ver:\n");
    scanf("%d",&v);

    // Chamada das funções
    int resultadoPar= par(v);
    printf("o valor na posicao %d e: %d\n",v,resultadoPar);

    mostrarParesEmOrdemDecrescente(v);

    return 0;
}

