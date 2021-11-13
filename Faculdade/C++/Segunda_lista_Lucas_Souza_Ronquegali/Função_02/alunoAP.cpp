#include "alunoAP.h"
#include <iostream>
#include <cstdlib>

using namespace std;

alunoAP::alunoAP() {
}

alunoAP::alunoAP(const alunoAP& orig) {
}

alunoAP::~alunoAP() {
}

void alunoAP:: lerDados(){
    
    cout << "Entre com a primeira nota: ";
    cin >> this-> n1;
    cout << "Entre com a segunda nota: ";
    cin >> this-> n2;
    cout << "Entre com a terceira nota: ";
    cin >> this-> n3 ;
    cout << "\n";
    
    cout << "Escolha o tipo de média a ser calculada \n\nEscolha A para média aritimética \nEscolha P para média ponderada: ";
    cin >> this-> op;
    
    switch (this->op){
    
        case 'a':
            cout << "\nA média aritimética do aluno é "<< this->calcA();
            break;
    
        case 'p':
            cout << "\nA média ponderada do aluno é "<< this->calcP();
            break;
       
   }
    
}

float alunoAP:: calcA(){

    float media = 0.0;
    
    media = (this->n1 + this->n2 + this->n3)/3;
    
    return media;
}

float alunoAP:: calcP(){
     
    float media = 0.0;
    
    media = (((this->n1 * 5) + (this->n2 * 3) + (this->n3 * 2))/10);
    
    return media;
}