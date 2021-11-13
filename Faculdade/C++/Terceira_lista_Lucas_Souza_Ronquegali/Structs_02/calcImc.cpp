#include "calcImc.h"
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;


calcImc::calcImc() {
}

calcImc::calcImc(const calcImc& orig) {
}

calcImc::~calcImc() {
}

void calcImc:: lerDados(){
    
    char op;
    int contador = 0, cpfbusca;
    
    do{
        cout << "\nDigite o nome: ";
        cin >> this->vetPessoas[contador].nome;
        cout << "\nDigite a altura: ";
        cin >> this->vetPessoas[contador].altura;
        cout << "\nDigite o peso: ";
        cin >> this->vetPessoas[contador].peso;
        cout << "\nDigite o CPF: ";
        cin >> this->vetPessoas[contador].cpf;
        cout << "\nDigite o sexo: ";
        cin >> this->vetPessoas[contador].sexo;
        
        contador++;
        
        cout << "\nDeseja continuar cadastrando?\n1 para continuar, ou insira qualquer outro cactere para encerrar: ";
        cin >> op;
        
    }while ((op == '1') && (contador <= 10));
    
    cout << "\nDigite um CPF para localizar e calcular IMC" << endl;
    cin >> cpfbusca;
    cout << "\nO cálculo de IMC é: " << this->imcCalc(cpfbusca, contador);
    
}

float calcImc:: imcCalc(int cpfBusca, int Contador){
    
    float imc = 0.0 ;
   
    for(int i = 0; i < Contador; i++){
        
        if(cpfBusca == this->vetPessoas[i].cpf){
            imc= (this->vetPessoas[i].peso / pow(this->vetPessoas[i].altura, 2));
        }
    }
    return imc;
}

