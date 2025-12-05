#include <iostream>
#include <string.h>
using namespace std;

class Produto{
    public:
    string descricao;
    float preco;
    int quant;

    //MÉTODO
    bool emEstoque(){
        return (quant > 0);
    }

    //INICIALIZANDO MINHA FUNÇÃO COM CONSTRUTORES
    // aqui eu valido as minhas entradas para serem recebidas pelos meus atributos
    Produto(string d, float p, int q){
        //produto 1
        if(d.length() >= 3)
            descricao = d;

        if(p > 0)
            preco = p;

        if(q >= 0)
            quant = q;
    }    

        //INICIALIZANDO MINHA FUNÇÃO COM CONSTRUTORES SEM PARAMETRO
    Produto(){
        //produto 2
        descricao = "Curso de psicologia, teste para constructor";
        preco = 2.99f;
        quant = 100;
    }

};

int main(){
    Produto p1("Curso de aeronautica do mario",500.00f,450);
    Produto p2;

    cout << "PRODUTO 1: " << p1.descricao << endl;
    cout << "Preco: R$" << p1.preco << endl;
    cout << "Quantidade: " << p1.quant << endl;
    
    cout << endl;
    
    cout << "PRODUTO 2: " << p2.descricao << endl;
    cout << "Preco: R$" << p2.preco << endl;
    cout << "Quantidade: " << p2.quant << endl;

    cout << endl;


    if(p1.emEstoque()){
        cout << "Produto 1 em estoque" << endl;
    } 
    else
    cout << "Produto 1 nao se encontra em estoque!" << endl;

    cout << endl;

    if(p2.emEstoque()){
        cout << "Produto 2 em estoque" << endl;
    } 
    else
    cout << "Produto 2 nao se encontra em estoque!" << endl;

    return 0;
}