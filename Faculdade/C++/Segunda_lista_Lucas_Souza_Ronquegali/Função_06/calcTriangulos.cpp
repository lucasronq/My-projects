#include "calcTriangulos.h"
#include <iostream>
#include <cstdlib>

using namespace std;

calcTriangulos::calcTriangulos() {
}

calcTriangulos::calcTriangulos(const calcTriangulos& orig) {
}

calcTriangulos::~calcTriangulos() {
}

void calcTriangulos:: lerDados(){
    
    cout << "Entre com o primeiro lado: ";
    cin >> this-> X;
    cout << "Entre com o segundo lado: ";
    cin >> this-> Y;
    cout << "Entre com o terceiro lado: ";
    cin >> this-> Z;
    

}

int calcTriangulos:: verifLados(){
    
    if (this-> X == this-> Y && this-> Y == this-> Z){
        cout << "\nO triângulo é equilátero.";      
    }
    else if(this-> X != this-> Y && this-> Y != this-> Z && this-> X != this-> Z){
        cout << "\nO triângulo é escaleno.";      
    }
    else{
        cout << "\nO triângulo é isóceles.";  
    }

    return 0;
}
