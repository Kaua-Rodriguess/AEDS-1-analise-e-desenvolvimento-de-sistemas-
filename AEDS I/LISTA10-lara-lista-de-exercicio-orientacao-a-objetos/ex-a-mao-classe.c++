#include <iostream>
#include <string.h>
using namespace std;

class Produto{
    public:
    string descricao;
    float preco;
    int quant;l

    //MÉTODO
    bool emEstoque(){
        return (quant > 0);
    }

    //INICIALIZAR MEU PRODUTO
    void inicializaProduto(string d,float p, int q){
        descricao = d;
        preco = p;
        quant = q;
    }
};

int main(){
    Produto p;
    p.descricao = "Curso de engenharia ofertado pela universidade PUC-MINAS";
    p.preco = 10.99f;
    p.quant = 200;

    cout << "Descricao: " << p.descricao << endl;
    cout << "Preco: R$" << p.preco << endl;
    cout << "Quantidade: " << p.quant << endl;

    if(p.emEstoque()){
        cout << "Produto em estoque" << endl;
    } 
    else
    cout << "Produto nao se encontra em estoque!" << endl;

    return 0;
}