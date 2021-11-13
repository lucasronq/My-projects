#include "retorneMenor.h"
#include <iostream>
#include <cstdlib>

using namespace std;

retorneMenor::retorneMenor() {
}

retorneMenor::retorneMenor(const retorneMenor& orig) {
}

retorneMenor::~retorneMenor() {
}

void retorneMenor:: leituraValor(){
   cout << "Entre com o primeiro número: "; 
   cin >> n1;
   cout << "Entre com o primeiro número: "; 
   cin >> n2;
}

int retorneMenor:: retMenor(){
    if(n1 < n2){
        cout << n1;
    }
    else{
        cout << n2;
    }
    return 0;
}