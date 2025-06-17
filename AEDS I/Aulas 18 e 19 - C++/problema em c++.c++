/*
Sistema de verificação de notas de alunos

Um sistema precisa verificar as notas de 5 alunos. Para cada aluno, o sistema deve:

- Solicitar o nome do aluno.🧑🏻‍🎓
- Solicitar duas notas.📝
- Calcular a média.➗

 Verificar:

- Se a média for maior ou igual a 7, o aluno está aprovado.✅
- Se estiver entre 5 e 6.9, está em recuperação.🟦
- Se for menor que 5, está reprovado.❌

O sistema deve exibir o nome do aluno e o resultado da avaliação. Ao final,
exibir quantos alunos foram aprovados, quantos em recuperação e quantos reprovados.

*/

// Código exemplo em C++ 
//printf("texto %s", nome);= cout << "texto " << nome;
//scanf("%s",nome)=cin >> nome;

//cout mostra
//cin coleta


#include <iostream>
using namespace std;

int main(){
    string nome;
    int aluno=5;
    int nota1;
    int nota2;
    int soma;
    float media;
    int aprovados=0;
    int recuperacao=0;
    int reprovados=0;

    for(int i=0;i<aluno;i++){
        cout << "Nome do aluno:\n";
        cin >> nome;

        cout << "Nota1:\n";
        cin >> nota1;

        cout << "Nota2:\n";
        cin >> nota2;

        soma=nota1+nota2;
        media=soma/2.0;

        cout << "A media do aluno"  <<nome<<  "e:" <<media<< endl; //endl quebre linha igual \n

        if(media>=7){
            cout << "Aprovado!" <<endl;
            aprovados++; //contando quantos alunos aprovados tem
        }
        else if(media>=5 && media<=6.9){
            cout << "Recuperacao!" <<endl;
            recuperacao++;
        }
        else { cout << "Reprovados!" <<endl;
        reprovados++;
        }
    }

    cout << "Aprovados" << aprovados <<endl;
    cout << "recuperacao" << recuperacao <<endl;
    cout << "reprovados" << reprovados <<endl;

   

    return 0;
}

