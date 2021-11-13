#include "diasEmAnos.h"
#include <cstdlib>
#include <iostream>

using namespace std;

diasEmAnos::diasEmAnos() {
}

diasEmAnos::diasEmAnos(const diasEmAnos& orig) {
}

diasEmAnos::~diasEmAnos() {
}

void diasEmAnos:: leituraDados(){
    
    cout << "*** CONVERSOR DE DIAS EM ANOS ***";
    cout << "\nEntre com o total de dias de vida: ";
    cin >> dias;
    
}

int diasEmAnos:: calculoTotal(){
    
    anos = (dias / 365);
    mes = ((dias % 365) / 30);
    dia = ((dias % 365) % 30);
    
    cout << "\nA idade em anos é "<< anos <<", total de "<< mes <<" e dias "<< dia <<"!";
}
