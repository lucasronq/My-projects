#include "eqSegundoGrau.h"
#include <iostream>
#include <cstdlib>

using namespace std;

eqSegundoGrau::eqSegundoGrau() {
}

eqSegundoGrau::eqSegundoGrau(const eqSegundoGrau& orig) {
}

eqSegundoGrau::~eqSegundoGrau() {
}

void eqSegundoGrau:: lerDados(){
    float a;
    
    cout << "Entre com o valor de A: ";
    cin >> a;
    cout << "Entre com o valor de B: ";
    cin >> this-> B;
    cout << "Entre com o valor de C: ";
    cin >> this-> C;
    
    cout << "\nO valor de delta é: "<< this->delta(a);
    
    
    
}

float eqSegundoGrau:: delta(float a){
    
    float result;
    result = 0.0;
    
    result = this->B * this->B - 4* a * this-> C;
    
    return result;
    
}

