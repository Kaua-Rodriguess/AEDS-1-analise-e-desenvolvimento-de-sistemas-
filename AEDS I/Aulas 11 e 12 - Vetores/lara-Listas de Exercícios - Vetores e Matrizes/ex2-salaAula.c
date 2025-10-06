/*Crie dois vetores de tamanho N, crie um vetor que some as duas notas,
  se a soma das notas for maior ou igual a 60 p aluno está aprovado.
  Em seguida, informe quantos alunos foram aprovados.*/
#include <stdio.h>

  int main(){
    int n,contador=0;

    printf("Quantos alunos tem na sala: \n");
    scanf("%d",&n);

    float nota1[n],nota2[n],soma[n];

    for(int i=0;i<n;i++)
    {
        printf("\n Aluno %d",i+1);

        printf("\nDigite a primeira nota:");
        scanf("%f",&nota1[i]);
        printf("Digite a segunda nota:");
        scanf("%f",&nota2[i]);
    }

    for(int i=0;i<n;i++)
    {
        soma[n]=nota1[i]+nota2[i];

        if(soma[n] >= 60){
        printf("Aluno %d Aprovado!\n",i+1);
        contador++;
        }
        else
        {
            printf("Aluno %d Reprovado\n!",i+1);
        }
    }

    printf("%d alunos foram aprovados!",contador);


    return 0;
  }
