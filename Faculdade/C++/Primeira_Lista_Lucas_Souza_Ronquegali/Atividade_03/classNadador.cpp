#include "classNadador.h"
#include <cstdlib>
#include <iostream>

using namespace std;


classNadador::classNadador() {
}

classNadador::classNadador(const classNadador& orig) {
}

classNadador::~classNadador() {
}

void classNadador:: introNadador(){
    
    cout << "*** CLASSIFICANDO NADADORES ***" << endl;
    cout << "\nEntre com a idade do nadador: ";
    cin >> idade;
    
}

int classNadador:: idadeNadador(){
    
    if ((idade >= 5) && (idade <= 7)){
        cout << "\nO nadador tem "<< idade << " anos, então ele pertence a classe infantil A!";
    }
    
    else if ((idade >= 8) && (idade <= 10)){
        cout << "\nO nadador tem "<< idade << " anos, então ele pertence a classse infantil B!";
    }
    
    else if ((idade >= 11) && (idade <= 13)){
        cout << "\nO nadador tem "<< idade << " anos, então ele pertence a classe juvenil A!";
    }
    
    else if ((idade >= 14) && (idade <= 17)){
        cout << "\nO nadador tem "<< idade << " anos, então ele pertence a classe juvenil B!";
    }
    else{
        cout << "\nO nadador tem "<< idade << " anos, então ele pertence a classe Adulto!"; 
    }
    
}
