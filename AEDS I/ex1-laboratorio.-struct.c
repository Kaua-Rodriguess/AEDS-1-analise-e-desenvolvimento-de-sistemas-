#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu(){
    int opcao;
    printf("=====SISTEMA DE GESTAO DE ALUNOS E CURSOS=====\n");
    printf("1 - Cadastrar aluno\n");
    printf("2 - Listar todos os alunos\n");
    printf("3 - Atualizar media de um aluno (buscar pela matricula)\n");
    printf("4 - Mostrar alunos com media >= 7.0\n");
    printf("5 - Calcular media geral dos alunos cadastrados\n");
    printf("6 - Sair\n");
    printf("Digite uma opcao:");
    scanf("%d", &opcao);
    return opcao;
}

// =====ESTRUTURA DA CADA ALUNO E DE CADA CURSO=====
typedef struct curso {
    char nomeCurso[40];
    int cargaHoraria; // carga horária em horas
    int numero;       // número de disciplinas
} novoCurso;

typedef struct aluno {
    char nome[50];
    int matricula;
    novoCurso curso;
    float mediaGeral;
} alunoNovo;


//=====FUNÇÃO QUE PERMITE O USUÁRIO INFORMAR TODOS OS DADOS DO ALUNO E DO SEU CURSO

alunoNovo cadastrarAluno() {
    int qtd;
    printf("Quantos alunos o usuatio vai cadastrar:");
    scanf("%d",&qtd);

    alunoNovo aluno[qtd]; //variável "aluno" do tipo "alunoNovo"

    for(int i=0; i < qtd ;i++){
        printf("\n====ALUNO %d====\n",i+1);
        
        printf("NOME:");
        fgets(aluno[i].nome, 50, stdin);

        printf("MATRICULA:");
        scanf("%d", &aluno[i].matricula);
        getchar();//getchar();
    
        printf("CURSO:");
        fgets(aluno[i].curso.nomeCurso,40, stdin);
    
        printf("CARGA HORARIA EM HORAS:");
        scanf("%d", &aluno[i].curso.cargaHoraria);
    
        printf("NUMERO DE DISCIPLINAS:");
        scanf("%d", &aluno[i].curso.numero);
    
        printf("MEDIA GERAL:");
        scanf("%f",&aluno[i].mediaGeral);
        getchar();//getchar();

        printf("\nAluno cadastrado com sucesso!\n");
        
        printf("\n=====DADOS DO ALUNOS CADASTRADOS=====\n");
    
        printf("NOME:\n");
        printf("MATRICULA:\n");
        printf("CURSO:\n");
        printf("CARGA HORARIA:\n");
        printf("NUMERO DE DICIPLINAS\n");*/
    }
    return aluno;
}

int main() {
    /* Sistema de gestão acadêmica */
    /* Organizar as informações de seus alunos e cursos */

    int opcao = 0;

    while (opcao != 6) {
        opcao = menu(opcao);

        switch (opcao) {
            case 1:
                printf("\n1 - Cadastrar aluno\n");
                cadastrarAluno();
                break;

            case 2:
                printf("\n2 - Listar todos os alunos\n");
                break;

            case 3:
                printf("\n3 - Atualizar media de um aluno (buscar pela matrIcula)\n");
                break;

            case 4:
                printf("\n4 - Mostrar alunos com media >= 7.0\n");
                break;

            case 5:
                printf("\n5 - Calcular media geral dos alunos cadastrados\n");
                break;

            case 6:
                printf("\nSaindo...\n");
                break;

            default:
                printf("\nNúmero inválido!!\n");
                break;
        }
    }

    return 0;
}
