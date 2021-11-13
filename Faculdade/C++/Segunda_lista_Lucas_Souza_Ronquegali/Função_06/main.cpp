#include <cstdlib>

#include "calcTriangulos.h"

using namespace std;

int main(int argc, char** argv) {
    
    calcTriangulos *Obj = new calcTriangulos();
    Obj->lerDados();
    Obj->verifLados();

    return 0;
}

