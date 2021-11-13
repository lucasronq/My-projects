#include "lojaCadastro.h"
#include <cstdlib>
#include <iostream>

using namespace std;

lojaCadastro::lojaCadastro() {
}

lojaCadastro::lojaCadastro(const lojaCadastro& orig) {
}

lojaCadastro::~lojaCadastro() {
}

void lojaCadastro:: lerDados(){
    
    char op;
    int contador = 0;
    
    do{
        cout << "\nDigite o nome do produto: ";
        cin >> this->vetProdutos[contador].nome;
        cout << "\nDigite o código do produto: ";
        cin >> this->vetProdutos[contador].cod;
        cout << "\nDigite o valor do produto: ";
        cin >> this->vetProdutos[contador].valor;
        
        contador++;
        
        cout << "\nDeseja continuar cadastrando?\n1 para continuar, ou insira qualquer outro cactere para encerrar: ";
        cin >> op;
        
           
    }while ((op == '1') && (contador <= 10));
    
    cout << "\nLista de Produtos cadastrados";
    this->mostrarDados(contador);
    
    cout << "\nEntre com o COD do produto para verificar o preço do item desejado: ";
    cin >> codbusca;
    
    cout << "\nO valor do produdo é: " << this->buscaValor(codbusca, contador);
    
    
    
}


void lojaCadastro:: mostrarDados(int Contador){
    
     for (int i = 0; i <= Contador; i++){
         
        cout << "\nItem número "<< i+1 <<": ";
        cout << this->vetProdutos[i].nome;
        cout << "\nCod do item: ";
        cout << this->vetProdutos[i].cod;
        cout << endl;
        
    }
    
    
}

float lojaCadastro:: buscaValor(int CodBusca, int Contador){
    
    float valor = 0.0;
    
    for(int i = 0; i <= Contador; i++){
        if(CodBusca == this->vetProdutos[i].cod){
            valor = this->vetProdutos[i].valor;
        }
        
    }
    return valor;
    
}
