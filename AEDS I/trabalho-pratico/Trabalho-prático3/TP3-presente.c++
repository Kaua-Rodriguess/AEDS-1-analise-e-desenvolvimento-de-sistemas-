#include <iostream>
#include <string.h>
using namespace std;

class itemNatalino{
    protected:
    string descricao;
    double preco;
    int quantidade;

    //MÉTODOS
    public:
    bool emEstoque(){
        return (quantidade > 0);
    }
    void exibirInfo(string d, double p, int qtd){
        //exibe os dados do item
        descricao = d;
        preco = p;
        quantidade = qtd;

        cout << endl << " item natalino cadastrado! " << endl;
        cout << "Descricao: " << descricao << endl;
        cout << "Preco: " << preco << endl;l
        cout << "Quantidade: " << quantidade << endl;

        cout << "" << endl;
    }
   /* void repor(int qtd){
        //aumenta a quantidade disponivel
    }

    virtual void vender(int qtd){
        //reduz a quantidade se houver estoque
        if(emEstoque()){
            quantidade -= qtd;
            cout << "Quantidade: " << quantidade <<  "disponivel!" << endl;
        }
    }*/
};
/*
//CLASSES DERIVADAS
    class EnfeiteNatalino : public itemNatalino{
        public:
        //constructor para classe derivada
        EnfeiteNatalino(string d, double p, int qtd);
        //método sobrescrito
        void vender(int qtd) override{
             if(emEstoque()){
            quantidade -= qtd;
            cout << "Quantidade: " << quantidade <<  "disponivel!" << endl;
        }
        }
    };
*/
int main(){
    int qtd;
    cout << "Informe quantos itens natalinos voce deseja cadastrar:" << endl;
    cin >> qtd;
    itemNatalino item[qtd];

    for(int i=0;i<qtd;i++){
        string descricao;
        double preco;
        int quantidade;

        cout << "CADASTRANDO ITEM " << i+1 << " NATALINO " << endl;
        cout << "Descricao: "; 
        cin >> descricao;
        cout << "Preco: "; 
        cin >> preco;
        cout << "Quantidade: "; 
        cin >> quantidade;

        item[i].exibirInfo(descricao,preco,quantidade);
    }
    
    return 0;
}