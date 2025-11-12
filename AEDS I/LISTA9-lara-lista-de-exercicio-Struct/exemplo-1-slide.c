#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno{
    int matricula;
    char nome[250];
    float nota[3],media;
}AlunoNovo;//o nome depois da } é o nome do novo tipo,
//O nome que vem depois da chave (}) é o novo tipo criado pelo typedef.

typedef int novoint;
//usando typedef

int main()
{   // NomeEstruturaNovo: AlunoNovo variável:caio;
    AlunoNovo caio;
    float soma = 0;
    novoint i;

    //int matricula
    caio.matricula = rand()%100; // matricula vai ser um numero aleatorio de 0 a 99

    //char nome
    printf("Digite o nome do aluno:");
    gets(caio.nome);

    //float nota
    for(i=0;i<3;i++){
        printf("Digite a nota %d:",i+1);
        scanf("%f",&caio.nota[i]);
        soma += caio.nota[i];
    }

    //media
    caio.media = soma/3;
    printf("O aluno:%s matricula:%d teve media:%.2f \n",caio.nome,caio.matricula,caio.media);

return 0;
}