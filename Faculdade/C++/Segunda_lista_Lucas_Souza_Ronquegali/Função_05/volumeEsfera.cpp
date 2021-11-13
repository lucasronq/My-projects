#include "volumeEsfera.h"
#include <math.h>
#include <iostream>
#include <cstdlib>

using namespace std;

volumeEsfera::volumeEsfera() {
}

volumeEsfera::volumeEsfera(const volumeEsfera& orig) {
}

volumeEsfera::~volumeEsfera() {
}

void volumeEsfera:: lerDados(){
    
    cout << "Informe o valor do raio da esfera: ";
    cin >> this->raio;
    
    cout << "\nO volume total da esfera é: "<<this->calculoEsfera();
}

float volumeEsfera:: calculoEsfera(){
    
    this-> re = pow(this->raio,this->elev);
    this-> volume = (this->diam * this-> pi * this-> re);
    
    return this->volume;
}
