/*!Exerc�cio 2) O c�digo a seguir declara duas vari�veis, mas n�o as inicializa. Sua tarefa �
modificar o c�digo para atribuir valores a elas antes da impress�o.
#include <stdio.h>
int main() {
char letra;
float preco;
printf("Letra: %c\n", letra);
printf("Pre�o: %.2f\n", preco);
return 0;
}
Tarefas:
1. Inicialize a vari�vel letra: Atribua a ela o caractere 'A'.
2. Inicialize a vari�vel preco: Atribua a ela o valor 9.99.*/

#include <stdio.h>

int main(){

    char letra='8';
    float preco=9.99;

    printf("Letra: %c\n",letra);
    printf("Pre�o: %.2f\n",preco);

    return 0;
}
