#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int matricula;
    char nome[50];
    float nota;
    float notaMin;
} Alunos;

void ler(Alunos *aluno, int n) {
    for(int i = 0; i < n; i++) {
        printf("\nMatricula: ");
        scanf("%d", &aluno[i].matricula);
        getchar();  // limpa o \n do buffer

        printf("Nome: ");
        fgets(aluno[i].nome, 50, stdin);
        aluno[i].nome[strcspn(aluno[i].nome, "\n")] = '\0'; 

        printf("Nota: ");
        scanf("%f", &aluno[i].nota);

        printf("Nota Min: ");
        scanf("%f", &aluno[i].notaMin);
        getchar(); // limpa o \n do buffer
    }
}

void printando(Alunos *aluno, int n) {
    float pontos;
    float porcentagem;

    for(int i = 0; i < n; i++) {
        pontos = aluno[i].notaMin - aluno[i].nota;

        if(pontos <= 0) {
            printf("\nMatricula: %d\nNome: %s\nNota Atual: %.2f\nNota Mínima: %.2f\nSituação: OK (nota acima da mínima)\n",
                   aluno[i].matricula, aluno[i].nome, aluno[i].nota, aluno[i].notaMin);
        } else {
            porcentagem = (pontos / aluno[i].notaMin) * 100;
            printf("\nMatricula: %d\nNome: %s\nNota Atual: %.2f\nNota Mínima: %.2f\nPontos para média: %.2f (%.2f%%)\n",
                   aluno[i].matricula, aluno[i].nome, aluno[i].nota, aluno[i].notaMin, pontos, porcentagem);
        }
    }
}

int main() {
    int n;

    do {
        printf("\nDigite o número de alunos: ");
        scanf("%d", &n);
    } while(n <= 1 || n >= 100);

    Alunos aluno[n];

    ler(aluno, n);
    printando(aluno, n);

    return 0;
}