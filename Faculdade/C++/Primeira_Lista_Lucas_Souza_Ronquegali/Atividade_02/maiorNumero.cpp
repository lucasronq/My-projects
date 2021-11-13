#include "maiorNumero.h"
#include <iostream>
#include <cstdlib>

using namespace std;

maiorNumero::maiorNumero() {
}

maiorNumero::maiorNumero(const maiorNumero& orig) {
}

maiorNumero::~maiorNumero() {
}

void maiorNumero:: entradaDados(){
    
    cout << "Digite o primeiro número: ";
    cin >> n1;
    cout << "\nDigite o segundo número: ";
    cin >> n2;
    cout << "\nDigite o terceiro número: ";
    cin >> n3;
}

int maiorNumero:: retorneMaior(){
    
    if ((n1 > n2) && (n1 > n3)){
        cout << "\nO maior número é " << n1 << "!";
    }   
    else if ((n2 > n1) && (n2 > n3)){
        cout << "\nO maior número é " << n2 << "!";
    }
    else if ((n3 > n1) && (n3 > n2)){
        cout << "\nO maior número é " << n3 << "!";
    }
    else{
        cout << "\nTodos os números são iguais";
    }
}