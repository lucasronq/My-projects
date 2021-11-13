#include <cstdlib>
#include <iostream>

#include "volumeEsfera.h"


using namespace std;

int main(int argc, char** argv) {
    
    volumeEsfera *Obj = new volumeEsfera();
    Obj->lerDados();
    Obj->calculoEsfera();

    return 0;
}

