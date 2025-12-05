/*Altere a classe Pessoa do exercício 1 para incluir um construtor que receba nome e
idade como parâmetros. Adicione também um método chamado exibirDados() que mostre as informações da pessoa*/
#include <iostream>
#include <string>
using namespace std;

class pessoa{
public:
    string nome;
    int idade;

    pessoa(string nome, int idade) : nome(nome), idade(idade){
        
    }

    void exibirDados(){
        cout<<"O nome da pessoa eh: "<<nome<<"\n";
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