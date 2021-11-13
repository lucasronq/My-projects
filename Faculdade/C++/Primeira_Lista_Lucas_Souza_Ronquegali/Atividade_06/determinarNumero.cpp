#include <iostream>
#include <cstdlib>
#include "determinarNumero.h"

using namespace std;

determinarNumero::determinarNumero() {
}

determinarNumero::determinarNumero(const determinarNumero& orig) {
}

determinarNumero::~determinarNumero() {
}

void determinarNumero:: entradaDados(){
    
    cout << "Digite um número inteiro: ";
    cin >> numero;
    
}

void determinarNumero:: verifPositivoNegativo(){
    
    if (numero > 0){
        cout << "\nO número "<< numero << ", é positivo" << endl;
    }
    else{
        cout << "\nO número "<< numero << ", é negativo" << endl;
    }
}

void determinarNumero:: verifParImpar(){
    
    if (numero % 2 == 0){
        cout << "\nO número "<< numero << ", é par." << endl;
    }
    else{
        cout << "\nO número "<< numero << ", é impar." << endl;
    }
}
    