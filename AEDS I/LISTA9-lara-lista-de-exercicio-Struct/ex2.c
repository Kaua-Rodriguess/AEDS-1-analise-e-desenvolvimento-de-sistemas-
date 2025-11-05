/*1. Escreva um programa para cadastrar clientes de uma loja. As informações 
necessárias são: nome, endereço e telefone. No seu programa, crie e leia 5 clientes. 
Ao final, imprima cada cliente cadastrado. */
#include <stdio.h>
#include <stdlib.h>


 typedef struct Address{
        char rua[50];
        char bairro[100];
        char cidade[100];
        char estado[100];
        int numero;
    } newAddress;

    typedef struct Client {
    char nome[100];
    int telefone;
    newAddress end;
} newClient; //nome do novo tipo criado assim como declaramos INT numero, com o criamos declaramos ClienteNovo cliente


int main()
{   //tipo     //variável
    newClient client[5];
    

    printf("=====CADASTRO DE CLIENTES NA ADIDAS=====\n");

    for(int i=0;i<5;i++){
        printf("\nCliente %d digite seu nome completo:\n",i+1);
        fgets(client[i].nome,50,stdin);

        printf("\nDIGITE O SEU ENDERECO:\n");
        printf("RUA:");
        fgets(client[i].end.rua,100,stdin);

        printf("BAIRRO:");
        fgets(client[i].end.bairro,100,stdin);

        printf("CIDADE:");
        fgets(client[i].end.cidade);

        printf("ESTADO:");
        fgets(client[i].end.estado);

        printf("NUMERO:");
        scanf("%d",&client.end.numero);
    }

    printf("\n=====CLIENTES CADASTRADOS=====\n");
    
    for(int i=0;i<5;i++){
        printf("CLIENTE %d\n",i+1);
        printf("Nome: %s\n",client.nome);

        printf("\nENDERECO\n");
        printf("Rua: %s\n",client.end.rua);
        printf("Bairro: %s\n",client.end.bairro);
        printf("Cidade: %s\n",client.end.cidade);
        printf("Estado: %s\n",client.end.estado);
        printf("Numero: %d\n",client.end.numero);
    }
return 0;
}
