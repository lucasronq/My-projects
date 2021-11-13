#include <cstdlib>
#include <iostream>

#include "alunoAP.h"

using namespace std;

int main(int argc, char** argv) {
    
    alunoAP *Obj = new alunoAP();
    Obj->lerDados();
    Obj->calcA();
    Obj->calcP();
    
    return 0;
}

