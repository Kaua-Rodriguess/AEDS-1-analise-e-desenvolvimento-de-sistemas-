/*Crie uma classe chamada Pessoa com dois atributos: nome e idade. Escreva um
programa que instancie um objeto dessa classe, atribua valores e imprima-os no terminal*/
#include <iostream>
#include <string>
using namespace std;

class pessoa{
public:
    string nome;
    int idade;
};

int main() {

    pessoa pessoaX;

    pessoaX.idade = 18;
    pessoaX.nome = "Luan Pierre";

    cout<<"O nome da pessoa eh: "<<pessoaX.nome<<"\n";
    cout<<"A idade da pessoa eh: "<<pessoaX.idade<<"\n";

 return 0;
}