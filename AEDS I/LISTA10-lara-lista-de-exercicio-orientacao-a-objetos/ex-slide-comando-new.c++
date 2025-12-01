#include <iostream>
#include <string.h>
using namespace std;

class Produto{
    public:
     string descricao;
     float preco;
     int quant;

     bool emEstoque(){
        return(quant > 0); //vai Ver se no estoque tem a quantidade de produto ou não(true ou false)
     }

//=======CONSTRUCTOR==========

    //Criando objeto - Exemplo 2
    Produto(string desc, float p,int q){
        if(desc.length() >= 3 )//tamanho das descrição for maior 0 
        descricao = desc;
        
        if(p > 0)//se o valor inserido em p(preco) for maior que zero preci recebe b, é tipo um validador de preço
        preco = p;
        
        if(q >= 0)//se o valor inserido em q(quantidade) for maior que zero quant recebe q, é tipo um validador de e quantidade 
        quant = q;
        }

//criando objeto - Exemplo 1
    Produto(){
        descricao = "Novo Pedido";
        preco = 0.01F;
        quant = 0;
    }
};

int main(){
    Produto p1 ("descricao produto 1", 1.99F,200);
    Produto *p2->new Produto("Descricao produto 2",1.99f,200); 

    //objeto - Exemplo 1
    cout << "Produto:" << p1.descricao << endl;
    cout << "Preco:" << p1.preco << endl;
    cout << "Estoque:" << p1.quant << endl;

    cout << "" << endl;

    //objeto - Exemplo 2
    cout << "Produto:" << p2.descricao << endl;
    cout << "Preco:" << p2.preco << endl;
    cout << "Estoque:" << p2.quant << endl;


    return 0;
}