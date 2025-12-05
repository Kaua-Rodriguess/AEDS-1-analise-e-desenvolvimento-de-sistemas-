/*Crie uma classe Produto com atributos privados: nome, preco e quantidade.
Implemente os métodos: cadastrarProduto, mudarPrecoProduto, mudarQuantidadeProduto e calcularValorTotalEmEstoque.*/

#include <iostream>
#include <string>
using namespace std;

class Produto{
private:
    string nome;
    float preco;
    int quantidade;
public:

    void setNome(string nome){
        if(nome.size() > 3){
            this -> nome = nome;
        }
        else{
            cout<<"\nNome do produto com caracteres insuficientes.";
        }
    }
    string getNome(){
        return nome;
    }

    void setPreco(float preco){
        if(preco > 0){
            this -> preco = preco;
        }
        else{
            cout<<"\nO preco nao pode ser menor que 0\n";
        }
    }
    float getPreco(){
        return preco;
    }

    void setQuantidade(int quantidade){
        if(quantidade >= 0){
            this -> quantidade = quantidade;
        }
        else{
            cout<<"\nQuantidade insuficiente\n";
        }
    }
    int getQuantidade(){
        return quantidade;
    }

    Produto(string nome, float preco, int quantidade){
        setNome(nome);
        setPreco(preco);
        setQuantidade(quantidade);
    }
    Produto(){
        nome = "Indefinido";
        preco = 0.1;
        quantidade = 0;
    }

    void mudarPrecoProduto(float novopreco){
        setPreco(novopreco);
    }

    void mudarQuantidade(int novaQuantidade){
        setQuantidade(novaQuantidade);
    }

    void calcularValorTotalEstoque(){
        float resultado = this->preco * this->quantidade;

        cout<<"O valor total em estoque do produto "<<nome<<" eh: "<<resultado<<"\n";
    }

    bool verificaProduto(string nome){
        if(this -> nome == nome){
            return true;
        }
        else{
            cout<<"O produto nao foi encontrado, verifique se escreveu o nome corretamene.\n";
            return false;
        }
    }

    void exibirDados(){
        cout<<"\nNome do produto: "<<nome<<"\n";
        cout<<"Preco do produto: "<<preco<<"\n";
        cout<<"Quantidade em estoque do produto: "<<quantidade<<"\n";
    }

};

int main() {

    string nomeT;
    float precoT;
    int quantidadeT, escolha;
    Produto produtoX;


    do{
        cout<<"\n---MENU---\n\n";
        cout<<"Digite 1 para cadastrar um novo produto.\n";
        cout<<"Digite 2 para mudar o preco de um produto.\n";
        cout<<"Digite 3 para mudar a quantidade em estoque de um produto.\n";
        cout<<"Digite 4 para ver o valor total em estoque de um produto.\n";
        cout<<"Digite 5 para exibir os dados dos produtos cadastrados.\n";
        cout<<"Digite 0 para sair...\n";
        cout<<"Digite a sua escolha: ";
        cin >> escolha;
        cin.ignore();

        switch(escolha){

            case 0:
                cout<<"Saindo do sistema...\n";
            break;

            case 1:

                cout << "Digite o nome do produto: ";
                getline(cin, nomeT);
                cout<<"Digite o preco do produto: ";
                cin >> precoT;
                cin.ignore();
                cout<<"Digite a quantidade em estoque do produto: ";
                cin >> quantidadeT;
                cin.ignore();

                produtoX = Produto(nomeT, precoT, quantidadeT);
                cout << "Produto cadastrado com sucesso!\n";

            break;
                
            case 2:

                cout<<"Digite o preco novo do produto: ";
                cin >> precoT;
                cin.ignore();
                produtoX.mudarPrecoProduto(precoT);
                if(produtoX.getPreco() == precoT){
                    cout<<"Preco alterado com sucesso!\n";
                }

            break;
            case 3:

                cout<<"Digite a nova quantidade do produto: ";
                cin >> quantidadeT;
                cin.ignore();
                produtoX.mudarQuantidade(quantidadeT);
                if(produtoX.getQuantidade() == quantidadeT){
                    cout<<"Quantidade em estoque do produto alterada com sucesso!\n";
                }

            break;
            case 4:

                produtoX.calcularValorTotalEstoque();

            break;
            case 5:

                produtoX.exibirDados();

            break;

        }

    }while(escolha != 0 );

 return 0;
}
