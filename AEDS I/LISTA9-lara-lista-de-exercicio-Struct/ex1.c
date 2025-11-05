/*1. Escreva um programa para cadastrar clientes de uma loja. As informações 
necessárias são: nome, endereço e telefone. No seu programa, crie e leia 5 clientes. 
Ao final, imprima cada cliente cadastrado. */
#include <stdio.h>
#include <stdlib.h>

typedef struct Cliente {
    char nome[100];
    char telefone;
    EnderecoNovo end; //cliente.end.rua
}ClienteNovo; //nome do novo tipo criado assim como declaramos INT numero, com o criamos declaramos ClienteNovo cliente

 typedef struct endereco{
        char rua[50];
        char bairro[100];
        int numero;
        int cep;
    }EnderecoNovo;

int main()
{   //tipo      //variável
    ClienteNovo cliente[5];

    printf("=====CADASTRO DE CLIENTES NA RENNER=====\n");

    for(int i=0;i<1;i++){
        printf("\nCliente %d digite seu nome completo:\n",i+1);
        fgets(cliente[i].nome,50,stdin);

        printf("\nDIGITE O SEU ENDERECO:\n");
        printf("RUA:");
        fgets(cliente[i].end.rua,100,stdin);

        printf("BAIRRO:");
        fgets(cliente[i].end.bairro,100,stdin);

        printf("NUMERO:");
        scanf("%d",&cliente[i].and.numero);

        printf("CEP:");
        scanf("%d",&cliente[i].end.cep);

        printf("\nDIGITE UM NUMERO DE CONTATO:\n");
        fgets(cliente[i].telefone,11,stdin);
    }

    printf("\n=====CLIENTES CADASTRADOS=====\n");
    
    for(int i=0;i<1;i++){
        printf("CLIENTE %d\n",i+1);
        printf("nome: %s\n",cliente[i].nome);

        printf("\nENDERECO\n");
        printf("Rua: %s\n",cliente[i].end.rua);
        printf("Bairro: %s\n",cliente[i].end.bairro);
        printf("Numero: %d\n",cliente[i].end.numero);
        printf("CEP: %d\n",cliente[i].end.cep);
        printf("\nCelular de contato: %s\n",cliente[i].telefone);
    }
return 0;
}
