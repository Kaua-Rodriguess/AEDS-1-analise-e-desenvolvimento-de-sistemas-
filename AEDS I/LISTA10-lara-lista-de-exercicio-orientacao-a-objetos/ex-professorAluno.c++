#include <iostrem>
#include <string>

using namespace std;

class Pessoa{
    protected://filhos herdam os atributos do pai
    int matricula;
    string nome;
}

class Professor: public Pessoa{
    
}