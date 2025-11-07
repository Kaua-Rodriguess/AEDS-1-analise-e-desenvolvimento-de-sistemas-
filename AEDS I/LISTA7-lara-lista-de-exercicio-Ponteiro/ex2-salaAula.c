//PONTEIRO
// Mudar o valor de um variável via ponteiro através do seu endereço
#include <stdio.h>

int main(){
    int minhaIdade = 48;
    printf("\nConteudo minhaIdade:%d\n",minhaIdade);
    printf("Endereco:%p\n",&minhaIdade);

    int *ptr = &minhaIdade;//ponteiro PminhaIdade aponta para o endereço da variável minhaIdade

    *ptr=51;//ponteiro *PminhaIdade está apontando para minhaidade
                    //o conteudo do endereço do ponteiro *PminhaIdade será passado para o endereço que eu ESTOU APONTANDO
                    //nesse caso, endereço da variavel minhaIdade
    printf("\nConteudo ponteiro(*ptr):%d\n",*ptr);
    printf("Endereco:%p\n",&ptr);

    printf("Nova idade:%d\n",minhaIdade);

    int*NovoPonteiro = &*ptr;//ponteiro apontando pra outro ponteiro qua aponta para uma variavel e mudando valor

    *NovoPonteiro=244;

    printf("\nConteudo ponteiro(*NovoPonteiro):%d\n",*NovoPonteiro);
    printf("Endereco:%p\n",&NovoPonteiro);

    printf("Nova idade:%d\n",minhaIdade);


    return 0;
}
