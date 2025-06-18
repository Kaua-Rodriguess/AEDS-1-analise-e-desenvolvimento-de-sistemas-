/*
Lista 13- Classes
 1. Crie uma classe para representar uma pessoa, com os atributos privados de nome, idade e
 altura. Crie os métodos públicos necessários para sets e gets e também um método para
 imprimir os dados de uma pessoa.
*/
#include <iostream>
#include <string>
using namespace std;


class pessoa{
    private:
    string nome;
    int idade;
    float altura;

    public:
    //MÉTODOS SETs
    void setNome(string n){
        nome = n;
    }
    void setIdade(int i){
        idade = i;
    }
    void setAltura(float a){
        altura = a;
    }

    //MÉTODOS GETs
    string getNome(){
        return nome;
    }
    int getIdade(){
        return idade;
    }
    float getAltura(){
        return altura;
    }

//MÉTODOS PARA IMPRIMIR OS DADOS DE UMA PESSOA.
void imprimirDados(){
    cout <<"Nome:" <<nome <<"metros." <<endl ;
    cout <<"Idade:" <<idade <<"anos." <<endl ;
    cout <<"Altura:" <<altura <<"metros."<<endl ;
}

};

int main(){
    pessoa p;

    p.setNome("lolo");
    p.setIdade(23);
    p.setAltura(1.52);

    p.imprimirDados();

    return 0;
}