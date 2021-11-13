#include <iostream>
#include <cstdlib>

#include "determinarNumero.h"

using namespace std;

int main(int argc, char** argv) {
    
    determinarNumero obj1;
    obj1.entradaDados();
    obj1.verifPositivoNegativo();
    obj1.verifParImpar();

    return 0;
}

