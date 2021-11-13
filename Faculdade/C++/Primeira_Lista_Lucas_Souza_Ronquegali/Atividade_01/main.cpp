#include <cstdlib>
#include <iostream>

#include "anosEmDias.h"

using namespace std;


int main(int argc, char** argv) {

    anosEmDias obj1;
    obj1.leituraIdade();
    cout << obj1.calculoTotal(); 
    
    return 0;
}

