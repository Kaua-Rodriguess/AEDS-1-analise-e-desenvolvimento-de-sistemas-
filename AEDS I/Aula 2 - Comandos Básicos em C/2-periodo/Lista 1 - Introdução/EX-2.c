/*!Exercício 2) O código a seguir declara duas variáveis, mas não as inicializa. Sua tarefa é
modificar o código para atribuir valores a elas antes da impressão.
#include <stdio.h>
int main() {
char letra;
float preco;
printf("Letra: %c\n", letra);
printf("Preço: %.2f\n", preco);
return 0;
}
Tarefas:
1. Inicialize a variável letra: Atribua a ela o caractere 'A'.
2. Inicialize a variável preco: Atribua a ela o valor 9.99.*/

#include <stdio.h>

int main(){

    char letra='8';
    float preco=9.99;

    printf("Letra: %c\n",letra);
    printf("Preço: %.2f\n",preco);

    return 0;
}
