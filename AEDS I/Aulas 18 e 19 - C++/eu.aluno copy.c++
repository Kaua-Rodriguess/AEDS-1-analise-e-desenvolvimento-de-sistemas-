#include <iostream>
#include <string>
using namespace std;

class Pessoa{
private:
    string nome;
    int idade;
    float altura;

public://Métodos(funções) públicas

// MÉTODOS SET (para definir os valores), modificação dos atributos da classe
  void setNome(string n){ 
    nome = n;
}

void setIdade(int i){
    if (i>0) idade = i;
}

void setAltura (float a){
    if(a > 0) altura=a;
}

// MÉTODOS GET (para acessar os valores), acesso aos atributos da uma classe 

string getNome(){
    return nome;
}
int getIdade(){
    return idade;
}
float getAltura(){
    return altura;
}

    // Método para imprimir os dados
 void imprimirDados(){
    cout << "Nome:" << nome << endl;
    cout << "Idade:" << idade << "anos" << endl;
    cout << "Altura:" << altura << "metros" << endl;
 }   

};

int main(){
    Pessoa p; //p é uma instância (um objeto real que usa esse molde).

    //usando os SETs da classe
    p.setNome("Kaua Rodrigues");
    p.setIdade(25);
    p.setAltura(1.85);

    //imprimindo os dados com o método da própria classe
    p.imprimirDados();


    return 0;
}