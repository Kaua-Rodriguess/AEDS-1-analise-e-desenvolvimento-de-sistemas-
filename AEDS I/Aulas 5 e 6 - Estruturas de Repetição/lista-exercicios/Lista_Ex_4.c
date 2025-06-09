/*! 4. Os alunos de uma turma com numAlunoS fizeram numProva provas. Leia cada uma das
 numProva provas feitas por cada um dos numAlunoS alunos. Imprima na tela: a média
 de cada aluno, a média da turma e o percentual dos alunos que tiveram média maior ou
 igual a 80%.*/

#include <stdio.h>
int main()
{

    int n_alunos;
    int n_provas;
    float media;
    float mediaTurma;
    float soma=0;
    float somaTurma=0;// essa variavel quarda a soma das notas de todos os alunos


    printf("Quantidade de provas feitas por cada aluno:\n");
    scanf("%i",&n_provas);

    printf("Quantidades de alunos na turma:\n\n");
    scanf("%i",&n_alunos);



    for(int i=0; i<n_alunos; i++) //for de alunos
    {

        for(int j=0; j<n_provas; j++) //for de provas
        {

            float nota;// essa variavel quarda a notas de cada aluno

            printf("nota de cada prova:\n");
            scanf("%f",&nota);

            soma+=nota;
        }
        media= soma/n_provas;//media de cada aluno é a soma das notas dividida pela quantidade de provas
        printf("a media de cada aluno e:%.2f\n",media);
        somaTurma+=media;
        soma=0;
    }

    mediaTurma= somaTurma/n_alunos;

    printf("a media da turma e:%.2f",mediaTurma);





    return 0;
}
