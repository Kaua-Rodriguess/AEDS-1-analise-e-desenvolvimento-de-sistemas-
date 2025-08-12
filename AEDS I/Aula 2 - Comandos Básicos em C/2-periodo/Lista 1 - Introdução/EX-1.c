/*!Exercício 1) Analise o seguinte trecho de código em C. Sua tarefa é identificar e corrigir
os erros, além de fazer uma pequena modificação na lógica do programa.

#include <stdio.h>
int main() {
int idade = "20";
float altura = 1.75;
printf("Idade: %d\n", idade);
printf("Altura: %.2f\n", altura);
return 0;
}
Tarefas:
1. Corrija o erro: A variável idade foi declarada com o tipo incorreto para o valor que
está sendo atribuído. Corrija a declaração para que o código compile e execute
corretamente.
2. Modifique o valor: Altere o valor da variável altura de 1.75 para 1.80.*/

#include <stdio.h>

int main(){
    int idade = 20; //!tarefa1
    float altura = 1.80;//!tarefa2
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);

    //!modificando a lógica do programa.
    printf("Digite uma nova idade:");
    scanf("%d",&idade);

    printf("Digite uma nova altura:");
    scanf("%f",&altura);

    printf("nova idade:%d \nnova altura:%.2F \n",idade,altura);




    return 0;
}
