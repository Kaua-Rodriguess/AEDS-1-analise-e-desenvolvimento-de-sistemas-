/*Modifique a classe Pessoa do exercício 2 para que os atributos sejam privados.
Crie métodos get e set para acessar e modificar os dados da pessoa com segurança*/
#include <iostream>
#include <string>
using namespace std;

class pessoa{
private:
    string nome;
    int idade;
public:

    void setNome(string nome){
        if(nome.size() > 5){
            this -> nome = nome;
        }
        else{
            cout<<"\nNumero de caracteres do nome insuficiente";
        }
    }
    string getNome(){
        return nome;
    }

    void setIdade(int idade){
        if(idade > 0){
            this -> idade = idade;
        }
        else{
            cout<<"\nIdade insuficiente.";
        }
    }
    int getIdade(){
        return idade;
    }

    pessoa(string nome, int idade){
        setNome(nome);
        setIdade(idade);
    }

    void exibirDados(){
        cout<<"\nO nome da pessoa eh: "<<nome<<"\n";
        cout<<"A idade da pessoa eh: "<<idade<<"\n";
    }
};

int main() {

    string nome;
    int idade;

    cout<<"Digite o nome da pessoa: ";
    getline(cin, nome);
    cout<<"Digite a idade da pessoa: ";
    cin >> idade;
    cin.ignore();

    pessoa pessoaX(nome, idade);

    pessoaX.exibirDados();

 return 0;
}
