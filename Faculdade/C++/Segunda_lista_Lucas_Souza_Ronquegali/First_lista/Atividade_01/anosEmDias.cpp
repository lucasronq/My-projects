#include "anosEmDias.h"
#include <iostream>
#include <cstdlib>

using namespace std;

anosEmDias::anosEmDias() {
}

anosEmDias::anosEmDias(const anosEmDias& orig) {
}

anosEmDias::~anosEmDias() {
}

void anosEmDias:: leituraIdade(){
    
    cout << "Digite a sua idade em anos: " << endl;
    cin >> anos;
    cout << "Sua idade em anos é " << anos << " !" << endl;
    cout << "Digite a sua idade em meses: " << endl;
    cin >> mes;
    cout << "Sua idade em meses é " << mes << " !" << endl;
    cout << "Digite a sua idade em dias: " << endl;
    cin >> dias;
    cout << "Sua idade em dias é " << dias << " !" << endl;
    
}

int anosEmDias:: calculoTotal(){
    
    int total;
    total = (dias +(anos*365)+(mes*30));
    
    return total;
    
}
