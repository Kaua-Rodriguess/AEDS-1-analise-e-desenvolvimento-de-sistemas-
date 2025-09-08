/*
10. Média de Notas com Validação - Solicite notas de um aluno até que ele insira uma
nota válida (entre 0 e 10). Use do while para garantir a validação.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int nota,qtdNota,soma=0,i=1;
    float media;


    do{

        printf("Digite quantas notas vc vai inserir:\n");
        scanf("%d %d",&nota,&qtdNota);
        printf("Digite nota %i:",i);


        soma=soma+nota;
        i++;
    }
    while(nota>=0 && nota>=10);

    media=soma/qtdNota;

    printf("Media da suas notas:%d",media);

    return 0;
}
