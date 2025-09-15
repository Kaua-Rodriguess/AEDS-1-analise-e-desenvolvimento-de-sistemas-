/*
2. Procedimento para encontrar conceito de um aluno 
Faça um procedimento que recebe a nota de um aluno, identifica e exibe o seu 
conceito, conforme a tabela abaixo. Faça um programa que lê a média de N 
alunos, acionando o procedimento para cada um deles. N é fornecido pelo usuário. 
Nota 
Até 39 
40 a 59 
Conceito 
F 
E 
60 a 69 
70 a 79 
80 a 89 
A partir de 90 
D 
C 
B 
A 
*/
#include <stdio.h>
void conceito(nota){
    if(nota<=39){
        printf("Conceito: F\n");
    }else if(nota>=40 && nota<=59){
        printf("Conceito: E\n");
    }else if(nota>=60 && nota<=69){
        printf("Conceito: D\n");
    }else if(nota>=70 && nota<=79){
        printf("Conceito: C\n");
    }else if(nota>=80 && nota<=89){
        printf("Conceito: B\n");
    }else if(nota>=90){
        printf("Conceito: A\n");
    }else{
        printf("Nota invalida\n");
    }
};
int main(){
    int N,nota;
    printf("Digite o numero de alunos:\n");
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        printf("Digite a nota do aluno %d:\n",i+1);
        scanf("%d",&nota);
        conceito(nota);
    }
    return 0;
}