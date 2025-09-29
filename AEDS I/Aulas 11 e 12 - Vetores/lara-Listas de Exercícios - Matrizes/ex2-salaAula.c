/*Crie dois vetores de tamanho N, crie um vetor que some as duas notas,
  se a soma das notas for maior ou igual a 60 p aluno está aprovado.
  Em seguida, informe quantos alunos foram aprovados.*/
#include <stdio.h>

  int main(){
    int n,contador=0;
    float nota1[n],nota2[n],soma[n];

    printf("Quantos alunos tem na sala: \n");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Aluno %d\n",i+1);
        printf("Digite a primeira nota:\n");
        scanf("%d",nota1[i]);
        printf("Digite a segunda nota:\n");
        scanf("%d",nota2[i]);   
    }

    for(int i=0;i<n;i++)
    {
        soma[i]=nota1[i]+nota2[i];
    }

    if(soma[i] >= 60){
        printf("Aprovado!");
        contador++;
    }
    else
    {
       printf("Reprovado!"); 
    }

    printf("%d alunos foram aprovado!";contador);


    return 0;
  }