#include <iostream>
#include <string.h>
using namespace std;

class Pessoa{
    public:
    string nome;
    int idade;
    //Constructor
    Pessoa(string n,int i){
        nome = n;
        idade = i;
    }
    void exibirDados(){
        cout << "Seu nome: " << nome << endl;
        cout << "Sua idade: " << idade << endl;
    }
};

 int main(){
    Pessoa p;
    string nome;
    int idade;
    cout << "Digite seu nome: " << nome << endl;
    cin >> nome;
    cout << "Digite sua idade: " << idade << endl;
    cin >> idade;
    Pessoa(nome,idade);
    p.exibirDados();
    

    

    return 0;
 }