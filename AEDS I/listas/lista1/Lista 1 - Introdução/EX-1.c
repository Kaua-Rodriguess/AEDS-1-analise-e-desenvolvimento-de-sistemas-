/*!Exerc�cio 1) Analise o seguinte trecho de c�digo em C. Sua tarefa � identificar e corrigir
os erros, al�m de fazer uma pequena modifica��o na l�gica do programa.

#include <stdio.h>
int main() {
int idade = "20";
float altura = 1.75;
printf("Idade: %d\n", idade);
printf("Altura: %.2f\n", altura);
return 0;
}
Tarefas:
1. Corrija o erro: A vari�vel idade foi declarada com o tipo incorreto para o valor que
est� sendo atribu�do. Corrija a declara��o para que o c�digo compile e execute
corretamente.
2. Modifique o valor: Altere o valor da vari�vel altura de 1.75 para 1.80.*/

#include <stdio.h>

int main(){
    int idade = 20; //!tarefa1
    float altura = 1.80;//!tarefa2
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);

    //!modificando a l�gica do programa.
    printf("Digite uma nova idade:");
    scanf("%d",&idade);

    printf("Digite uma nova altura:");
    scanf("%f",&altura);

    printf("nova idade:%d \nnova altura:%.2F \n",idade,altura);




    return 0;
}
