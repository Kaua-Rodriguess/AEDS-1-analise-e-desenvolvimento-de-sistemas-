#include <iostream>
#include <string.h>
using namespace std;

class Pessoa{
    public:
    string nome;
    int idade;
    //Constructor
    /*Pessoa(string n,int i){
        nome = n;
        idade = i;
        cout << "Seu nome: " << nome << endl;
        cout << "Sua idade: " << idade << endl;
    }*/
};

 int main(){
    Pessoa p;
    cout << "Digite seu nome: " << p.nome << endl;
    cin >> p.nome;
    cout << "Digite sua idade: " << p.idade << endl;
    cin >> p.idade;
    cout << "Seu nome: " << p.nome << endl;
    cout << "Sua idade: " << p.idade << endl;

    

    return 0;
 }