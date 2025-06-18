#include <iostream>
#include <string>
using namespace std;

class Pessoa {
private:
    string nome;
    int idade;
    float altura;

public:
    // MÉTODOS SET (para definir os valores)
    void setNome(string n) {
        nome = n;
    }

    void setIdade(int i) {
        if (i >= 0) idade = i;
    }

    void setAltura(float a) {
        if (a > 0) altura = a;
    }

    // MÉTODOS GET (para acessar os valores)
    string getNome() {
        return nome;
    }

    int getIdade() {
        return idade;
    }

    float getAltura() {
        return altura;
    }

    // Método para imprimir os dados
    void imprimirDados() {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << " anos" << endl;
        cout << "Altura: " << altura << " metros" << endl;
    }
};

int main() {
    Pessoa p;

    // Usando os SETs
    p.setNome("Kauã Rodrigues");
    p.setIdade(18);
    p.setAltura(1.75);

    // Imprimindo os dados com o método da própria classe
    p.imprimirDados();

    return 0;
}
