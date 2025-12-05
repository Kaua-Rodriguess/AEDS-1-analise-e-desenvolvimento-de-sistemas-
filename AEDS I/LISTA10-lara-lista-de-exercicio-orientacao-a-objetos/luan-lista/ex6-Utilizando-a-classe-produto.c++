/*Utilizando a classe Produto do exercício 4, crie um vetor de objetos para armazenar
uma lista de 5 produtos. Implemente um menu simples para cadastrar os produtos e exibir
todos*/

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

    void exibirDados(int i){
        cout<<"\nNome do produto: "<<nome<<"\n";
        cout<<"Preco do produto: "<<preco<<"\n";
        cout<<"Quantidade em estoque do produto: "<<quantidade<<"\n";
        cout<<"Indicie do produto: "<<i<<"\n";
    }

};

int main() {

    string nomeT;
    float precoT;
    int quantidadeT, escolha, indicie;
    Produto produtos[5];

    do{
        cout<<"\n---OPCOES DO MENU---\n\n";
        cout<<"(1) para cadastrar os produtos.\n";
        cout<<"(2) para mudar o preco de um produto.\n";
        cout<<"(3) para mudar a quantidade em estoque de um produto.\n";
        cout<<"(4) para ver o valor total em estoque de um produto.\n";
        cout<<"(5) para exibir os dados dos produtos cadastrados.\n";
        cout<<"(0) para sair...\n";
        cout<<"Digite a sua escolha: ";
        cin >> escolha;
        cin.ignore();

        switch(escolha){

            case 0:
                cout<<"Saindo do sistema...\n";
            break;

            case 1:

                for(int i = 0; i < 5; i++){
                    cout << "Digite o nome do produto "<<i + 1<<": ";
                    getline(cin, nomeT);
                    cout<<"Digite o preco do produto: "<<i + 1<<": ";
                    cin >> precoT;
                    cin.ignore();
                    cout<<"Digite a quantidade em estoque do produto: ";
                    cin >> quantidadeT;
                    cin.ignore();
                    produtos[i] = Produto(nomeT, precoT, quantidadeT);
                    cout << "Produto cadastrado com sucesso!\n";
                }
                
            break;
                
            case 2:
                cout<<"\n---Dados dos produtos---\n";
                for(int i = 0; i < 5; i++){
                    produtos[i].exibirDados(i);
                }
                cout<<"\nDigite o indicie do produto que deseja mudar preco: ";
                cin >> indicie;
                cout<<"Digite o preco novo do produto: ";
                cin >> precoT;
                cin.ignore();
                produtos[indicie].mudarPrecoProduto(precoT);
                if(produtos[indicie].getPreco() == precoT){
                    cout<<"Preco alterado com sucesso!\n";
                }

            break;
            case 3:

                cout<<"\n---Dados dos produtos---\n";
                for(int i = 0; i < 5; i++){
                    produtos[i].exibirDados(i);
                }
                cout<<"\nDigite o indicie do produto que deseja alterar a quantidade: ";
                cin >> indicie;
                cout<<"Digite a nova quantidade do produto: ";
                cin >> quantidadeT;
                cin.ignore();
                produtos[indicie].mudarQuantidade(quantidadeT);
                if(produtos[indicie].getQuantidade() == quantidadeT){
                    cout<<"Quantidade em estoque alterada com sucesso!\n";
                }

            break;
            case 4:

                cout<<"---Dados dos produtos---\n";
                for(int i = 0; i < 5; i++){
                    produtos[i].exibirDados(i);
                }
                cout<<"\nDigite o indicie do produto que deseja calcular o valor em estoque: ";
                cin >> indicie;

                produtos[indicie].calcularValorTotalEstoque();

            break;
            case 5:

                cout<<"\n---Dados dos produtos---\n";
                for(int i = 0; i < 5; i++){
                    produtos[i].exibirDados(i);
                }

            break;

        }

    }while(escolha != 0 );

 return 0;
}
