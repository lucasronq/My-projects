#include "cpfBusca.h"
#include <iostream>
#include <cstdlib>

using namespace std;

cpfBusca::cpfBusca() {
}

cpfBusca::cpfBusca(const cpfBusca& orig) {
}

cpfBusca::~cpfBusca() {
}

void cpfBusca:: lerDados(){
    
    char op;
    
    int contador = 0;
    
    do{
        cout << "\nDigite o nome: ";
        cin >> this->vetCpf[contador].nome;
        cout << "\nDigite o CPF: ";
        cin >> this->vetCpf[contador].cpf;
        
        contador++;
        
        cout << "\nDeseja continuar cadastrando?\n1 para continuar, ou insira qualquer outro caractere para encerrar: ";
        cin >> op;
        
    }while ((op == '1') && (contador <= 3));
    
    int cpfAux;
    
    cout << "Informe CPF para busca: ";
    cin >> cpfAux;
    
    if ((this->localizaCpfBinario(contador, cpfAux)) != -1){
        cout << "CPF encontrado!";
    }
    else
        cout << "CPF inexistente!";
    
}

void cpfBusca:: localizaCpfSequencial(int Contador, int CpfAux){
      
    for (int i = 0; i <= Contador; i++){
        if(CpfAux == this->vetCpf[i].cpf){
           cout << "CPF encontrado!";
        }
 
    }        

}

int cpfBusca:: localizaCpfBinario(int Contador, int CpfAux){
    
    int inferior, superior, meio;
    inferior = 0;
    superior = Contador-1;
    
    while (inferior <= superior){
        meio = (inferior + superior) / 2;
        if (CpfAux == this->vetCpf[meio].cpf)
            return meio;
        else if (CpfAux < this->vetCpf[meio].cpf)
            superior = meio -1;
        else
            inferior = meio + 1;
        
    }
    return -1;
}

void cpfBusca:: ordernaBolha(int Contador){
    
    int i, j;
    int t;
    
    for (i = Contador - 1; i >= 1; i--){
        for (j = 0; j < i; j++){
            if (this->vetCpf[j].cpf > this->vetCpf[j+1].cpf){
                t = this->vetCpf[j];
                this->vetCpf[j] = this->vetCpf[j+1];
                this->vetCpf[j+1] = t;
            }
        }
    }
}