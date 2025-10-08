//PONTEIRO
// Mudar o valor de um variável via ponteiro através do seu endereço
#include <stdio.h>

int main(){
    int minhaIdade = 48;
    printf("\nConteudo minhaIdade:%d\n",minhaIdade);
    printf("Endereco:%p\n",minhaIdade);

    int *PminhaIdade = &minhaIdade;//ponteiro PminhaIdade aponta para o endereço da variável minhaIdade
    *PminhaIdade;

    *PminhaIdade=51;//ponteiro *PminhaIdade está apontando para minhaidade
                    //o conteudo do endereço do ponteiro *PminhaIdade será passado para o endereço que eu ESTOU APONTANDO 
                    //nesse caso, endereço da variavel minhaIdade
    printf("\nConteudo *PminhaIdade:%d\n",*PminhaIdade);
    printf("Endereco:%p\n",*PminhaIdade);

    int*ptr = &*PminhaIdade;//ponteiro apontando pra outro ponteiro qua aponta para uma variavel e mudando valor
    *ptr=244;
    printf("\nConteudo *ptr:%d\n",*ptr);
    printf("Endereco:%p\n",*ptr);

    printf("Nova idade:%d\n",minhaIdade);


    return 0;
}