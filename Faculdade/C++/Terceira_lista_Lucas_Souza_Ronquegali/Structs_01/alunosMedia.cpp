#include "alunosMedia.h"
#include <iostream>

using namespace std;

alunosMedia::alunosMedia() {
}

alunosMedia::alunosMedia(const alunosMedia& orig) {
}

alunosMedia::~alunosMedia() {
}

void alunosMedia:: lerDados(){
    
    char op;
    int contador = 0;
    
    do{
        cout << "\nDigite o nome do aluno: ";
        cin >> this->dadosAlunos[contador].nome;
        cout << "\nDigite a matricula do aluno: ";
        cin >> this->dadosAlunos[contador].matricula;
        cout << "\nDigite a primeira nota: ";
        cin >> this->dadosAlunos[contador].nota1;
        cout << "\nDigite a segunda nota: ";
        cin >> this->dadosAlunos[contador].nota2;
        
        contador++;
        
        cout << "\nDeseja continuar cadastrando?\n1 para continuar, ou insira qualquer outro cactere para encerrar: ";
        cin >> op;
        
    }while ((op == '1') && (contador <=10) );
    
     for(int i = 0; i < contador; i++){
        cout << "\nOs dados do " << i+1 << "º aluno cadastrados são: " << endl;
        cout << "Nome: " << this->dadosAlunos[i].nome << endl;
        cout << "Matricula: " << this->dadosAlunos[i].matricula << endl;
        cout << "Nota 1: " << this->dadosAlunos[i].nota1 << endl;
        cout << "Nota 2: " << this->dadosAlunos[i].nota2 << endl;
    }
    
}
