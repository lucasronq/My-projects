#include "negativoPositivo.h"
#include <iostream>
#include <cstdlib>

using namespace std;

negativoPositivo::negativoPositivo() {
}

negativoPositivo::negativoPositivo(const negativoPositivo& orig) {
}

negativoPositivo::~negativoPositivo() {
}

void negativoPositivo:: lerDados(){
    
    cout << "Entre com um número: ";
    cin >> this->n;
    
    cout << this-> verificador();
    
}

int negativoPositivo:: verificador(){
    
    if (this->n > 0){
        return 1;
    }
    else if (this->n == 0){
        return 0;
    }
    else if (this-> n < 0){
        return -1;
    }
}
