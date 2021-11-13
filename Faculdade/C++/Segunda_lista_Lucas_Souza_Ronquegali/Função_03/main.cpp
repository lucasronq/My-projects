#include <cstdlib>
#include <iostream>

#include "negativoPositivo.h"

using namespace std;


int main(int argc, char** argv) {
    
    negativoPositivo *Obj = new negativoPositivo();
    Obj-> lerDados();
    Obj->verificador();

    return 0;
}

