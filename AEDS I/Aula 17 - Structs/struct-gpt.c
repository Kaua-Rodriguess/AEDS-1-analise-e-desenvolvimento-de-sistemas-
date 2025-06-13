/*
esse exercício esta no slide
33
Exercício 1
Crie um programa que permita armazenar o nome, a altura e da
data de nascimento de até 10 pessoas. Cada pessoa deve ser
representada por uma struct dentro de um vetor. A data de
nascimento também deve ser uma struct. O nome e a altura de
cada pessoa devem ser informados pelo teclado. A geração da
data de nascimento deve ser feita aleatoriamente através de uma
função. */

/*1-Structs → estruturas que agrupam variáveis de diferentes tipos.
2-Vetores → armazenar várias pessoas (no caso, 10).
3-Função com retorno → para gerar a data de nascimento aleatoriamente.*/
 //STRUCT=ESTRUTURA
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
//
typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct {
    char nome[100]; //string de nome
    float altura;
    Data dataNascimento;
}Pessoa;

//Função para gerar uma data aleatória
struct Data gerarDataAleatoria(){
    struct Data d;
    d.dia = rand() % 28 + 1;  // de 1 a 28
    d.mes = rand() % 12 + 1; // de 1 a 12
    d.ano = rand() %31 + 1960; // de 1960 a 2000
    return d;
};

int main(){

    //vetor de 10 pessoas
struct Pessoa pessoas[TAM];

//laço para preencher os dados
for (int i=0;i<TAM;i++){
    printf("Digite o nome da pessoa %d: ",i+1);
    scanf(" %[^\n]",pessoas[i].nome); //lê nome com espaços //%[^\n] não emtendi essa sintaxe

    printf("Digite a altura da pessoa %d (em metros):", i+1);
    scanf("%f",&pessoas[i].altura);

    pessoas[i].nascimento=gerarDataAleatoria();
};

// Exibe os dados
for(int i;i<10;i++){
    printf("\nPessoa %d:\n",i+1);
    printf("Nome: %s\n", pessoas[i].nome);
    printf("Altura: %f.2 m\n", pessoas[i].altura);
    printf("Data de nascimento: %02d/%02d/%d\n", pessoas[i].nascimento.dia, pessoas[i].nascimento.mes,pessoas[i].nascimento.ano); //pq 02d?
}
po
    return 0;
}

//structs são declaradas fora da main
