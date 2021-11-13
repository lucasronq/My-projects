#include <iostream> 
#include <cstdlib>
#include <math.h>
#include "calcEuclidiana.h"

using namespace std;

calcEuclidiana::calcEuclidiana() {
}

calcEuclidiana::calcEuclidiana(const calcEuclidiana& orig) {
}

calcEuclidiana::~calcEuclidiana() {
}

void calcEuclidiana:: lerDados(){
    
    cout << "\nDigite o valor do x1: "<< endl;
    cin >> x1;
    cout << "\nDigite o valor do x2: "<< endl;
    cin >> y1;
    cout << "\nDigite o valor do y1: "<< endl;
    cin >> x2;
    cout << "\nDigite o valor do y2: "<< endl;
    cin >> y2;
    
}

float calcEuclidiana:: calcularDE(){
    
    float d;
    
    d = sqrt( pow((x2-x1), 2) + pow((y2-y1), 2));
    
    return d;
}
