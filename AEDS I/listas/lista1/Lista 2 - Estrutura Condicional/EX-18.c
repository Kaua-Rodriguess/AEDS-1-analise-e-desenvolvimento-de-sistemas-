/*!
8. Faça um programa que leia três notas de um aluno, calcule a média e exiba a
situação:
● "Aprovado" se a média for maior ou igual a 7.0
● "Recuperação" se estiver entre 5.0 e 6.9
● "Reprovado" se for menor que 5.0
Se o aluno ficou de recuperação, calcule quanto ele precisa tirar na reavaliação,
contando que a mesma vale 10 pontos e que a nota final do aluno é a média
simples entre a média das três provas e a nota da reavaliação.
*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
float nota1,nota2,nota3,soma,media,Nfinal,reavaliacao,notaMax;

printf("Digite sua nota1: \n");
scanf("%f",&nota1);

printf("Digite sua nota2: \n");
scanf("%f",&nota2);

printf("Digite sua nota3: \n");
scanf("%f",&nota3);

soma=nota1+nota2+nota3;
 
media=soma/3;

if(media>=7){
    printf("Aprovado!");
}
else if(media>=5 && media<=6.9){

    /* 
     ==========OPERAÇÃO ALGEBRICA=========
     "nota final do aluno é a média simples entre 
     a média das três provas e a nota da reavaliação."
     
        notaFinal --> media + reavaliação/2 >= 7
        notaFinal --> media + reavaliação = 7*2
        notaFinal --> reavaliação + media=14
        notaFinal --> reavaliação= 14 - media
        */
    notaMax=14-media;// maximo que ele precisa tirar para passar

    printf("\n Voce esta de recuperacao,e necessario tirar %.2f pontos para passar na reavaliacao! \n",notaMax);//quantos ele precisa para tirar na reavaliacao
    printf("\n Quantos voce tirou na reavaliacao?\n");
    scanf("%f",&reavaliacao);

    if(reavaliacao>=notaMax){
        printf("Parabens,voce foi aprovado!!");
    }
    else{
        printf("Infelizmente voce foi reprovado!");
    }
}
else{
    printf("Reprovado!");
}




return 0;
}
