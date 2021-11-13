#include <cstdlib>
#include <iostream>
#include "calcEuclidiana.h"

using namespace std;


int main(int argc, char** argv) {
    
    calcEuclidiana obj1;
    obj1.lerDados();
    cout << obj1.calcularDE();

    return 0;
}

