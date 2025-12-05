/*Crie a classe ContaBancaria com atributos: número da conta, nome do titular e saldo.
Implemente métodos para depositar, sacar (com verificação de saldo) e
mostrarSaldo.
Crie um menu para perguntar ao usuário se ele deseja realizar depósito, saque, mostrar
saldo ou finalizar o programa.
No método sacar, controle para não deixar o saldo ficar negativo*/

#include <iostream>
#include <string>
using namespace std;

class ContaBancaria{
private:
    string nome;
    int numeroConta;
    float saldo;
public:
    void setNome(string nome){
        if(nome.size() > 5){
            this->nome = nome;
        }
        else{
            cout<<"O nome nao possui caracteres suficientes.";
        }
    }
    string getNome(){
        return nome;
    }
    
    void setNumeroDaConta(int numeroConta){
        if(numeroConta >= 6){
            this->numeroConta = numeroConta;
        }
        else{
            cout<<"Numero da conta icorreto.";
        }
    }
    int getNumeroConta(){
        return numeroConta;
    }

    void setSaldo(float saldo){
        if(saldo > 0){
            this->saldo = saldo;
        }
        else{
            cout<<"O saldo não pode ser menor que zero.";
        }
    }
    float getSaldo(){
        return saldo;
    }

    ContaBancaria(string nome, int numeroConta, float saldo){
        setNome(nome);
        setNumeroDaConta(numeroConta);
        setSaldo(saldo);
    }
    ContaBancaria(){
        this->nome = "Indefinido";
        this->numeroConta = 000000;
        this->saldo = 0.0;
    }

    void depositar(float valorDeposito){
        if(valorDeposito > 0){
            this->saldo += valorDeposito;
            cout<<"Valor de R$"<<valorDeposito<<" depositado com sucesso.";
        }
        else{
            cout<<"Nao e possivel depositar um calor menor ou igual a zero.\n";
        }
    }

    void sacar(float valorSaque){
        if(this->saldo >= valorSaque){
            this->saldo -= valorSaque;
            cout<<"Valor de R$"<<valorSaque<<" sacado com sucesso.";
        }
        else{
            cout<<"Nao e possivel sacar esse valor, saldo insuficiente.\n";
        }
    }

    void mostrarSaldo(){
        cout<<"Seu saldo atual e R$"<<saldo<<"\n";
    }

    void mostrarDetalhes(){
        cout<<"\n---Detalhes da conta---\n\n";
        cout<<"Nome do titular: "<<nome<<"\n";
        cout<<"Numero da conta: "<<numeroConta<<"\n";
        cout<<"Saldo atual: "<<saldo<<"\n";

    }
};

int main() {

    ContaBancaria contaBancariaX;
    string nome;
    int numeroConta, escolha;
    float saldo;

    do{
        cout<<"\n---MENU---\n\n";
        cout<<"Digite 1 para cadastrar uma conta.\n";
        cout<<"Digite 2 para realizar um deposito.\n";
        cout<<"Digite 3 para realizar um saque.\n";
        cout<<"Digite 4 para ver os detalhes da conta.\n";
        cout<<"Digite 5 para sair...\n";
        cout<<"Digite sua escolha: ";
        cin >> escolha;
        cin.ignore();

        switch(escolha){
            case 1:

                cout<<"Digite o nome do titular da conta: ";
                getline(cin, nome);
                cout<<"Digite o numero da conta (pelo menos 6 digitos): ";
                cin >> numeroConta;
                cout<<"Digite o saldo da conta: ";
                cin >> saldo;
                contaBancariaX = ContaBancaria(nome, numeroConta, saldo);

            break;

            case 2:

                contaBancariaX.mostrarSaldo();
                cout<<"Digite o valor valor que voce deseja depositar: ";
                cin >> saldo;
                contaBancariaX.depositar(saldo);

            break;

            case 3:

                contaBancariaX.mostrarSaldo();
                cout<<"Digite o valor valor que voce deseja sacar: ";
                cin >> saldo;
                contaBancariaX.sacar(saldo);

            break;

            case 4:

                contaBancariaX.mostrarDetalhes();

            break;
        }

    }while(escolha != 5);

 return 0;
}
