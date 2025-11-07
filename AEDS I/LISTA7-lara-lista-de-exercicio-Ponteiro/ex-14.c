/*Funções do stdlib-> #include <stdlib.h>

criar um espaço na memoria dinamicamente
int *p = MALLOC(SIZEOFF(int)*10); 

mudar o tamanho do espaço da memoria
 p=REALLOC(SIZEOFF(int)*5);   

preencher com 0 todos os espaços de memoria vazio
P = CALLOC(SIZEOFF(int)*10;

Libera a memória utilizada, IMPORTANTE, SEMPRE TEM QUE TER
FREE(P);
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Digite o tamanho do vetor:");
    scanf("%d",&n);
    int *p = malloc(sizeof(int)* n); //alocando dinamicamente um vetor de n inteiros
    printf("\nPOSICAO:\n");
    for(int i=0;i<n;i++){
        printf("[%d]:",i);
        //*(p+i)- conteudo do vetor
        //p+i - endereço do vetor
        // &p - endereço do ponteiro
        scanf("%d",p+i);
    }
    printf("\nCONTEUDO:\n");
    for(int i=0;i<n;i++){
        printf("[%d]:%d\n",i,*(p+i));
    }
        free(p);
return 0;
}