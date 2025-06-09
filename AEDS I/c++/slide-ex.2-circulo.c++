/*
2) Escreva um programa em C++ que define uma classe “Lampada”.
O estado da lâmpada deve ser representado de forma privada mas deve ser
acessível através dos seguintes métodos de instância:
• estaAcesa(),
• estaApagada(),
• acender(),
• apagar().
A classe deve manter o registro de quantas lâmpadas (instâncias/objetos) existem.
O programa deve demostrar que a classe monitora as instâncias; use o destruidor
para decrementar o número de instâncias!
*/

//intancia é um objeto dentro da classe
class Lampada{
private:
    bool acesa;
    static int totalLampadas; // variável estática (compartilhada por todas as instâncias)

    public:
    estaAcesa(){}
}