#include <stdio.h>
int main(){
    int vetor[10];

    printf("Digite um numero:\n");
    for(int i=0;i<10;i++){
        printf("[%d]:",i);
        scanf("%d",&vetor[i]);//vetor[1],vetor[2],vetor[3]...
    }

    printf("\nConteudo do vetor percorrendo com ponteiro:");
    int *ptr=vetor;//aponto para o primeiro elemento/casa do vetor
    for(int i=0;i<10;i++){
        printf("\n[%d]:%d",i,*ptr);//imprime o conteudo do primeiro elemento do vetor: vetor[0]
        ptr++;//aritimética dos ponteiros: ++ eu ando para o proximo elemento/casa do vetor a cada repetição vetor[1],vetor[2]...
    }

    return 0;
}
//OBSERVE QUE O I só serve para imprimir o indice, o ponteiro não precisa dele
/*LEMBRE-SE:
-Depois do loop, ptr apontará para depois do último elemento do vetor.
-Se tentar usar *ptr fora do loop, pode acessar memória inválida → cuidado.
*/
