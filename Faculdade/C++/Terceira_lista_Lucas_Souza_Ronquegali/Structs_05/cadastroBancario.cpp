#include "cadastroBancario.h"
#include <iostream>

using namespace std;

cadastroBancario::cadastroBancario() {
}

cadastroBancario::cadastroBancario(const cadastroBancario& orig) {
}

cadastroBancario::~cadastroBancario() {
}

void cadastroBancario:: lerDados(){
    
    cout << "CADASTRO DE CONTAS"<<endl;
    
    for(int i = 0; i < 3; i++){
        
       cout << "\nNome: ";
       cin >> this->cadastroConta[i].nome;
       cout <<"CPF: ";
       cin >> this->cadastroConta[i].cpf;
       cout << "Nº da Conta: ";
       cin >> this->cadastroConta[i].conta;
       cout << "Deposito inicial: ";
       cin >> this->cadastroConta[i].deposito;
       
    }
    
    cout <<"\n";
    
    this->imprimirDados();
    
    
}

void cadastroBancario:: imprimirDados(){
    
    int contaVerif, op;
    
    cout << "Digite a conta para realizar operações: ";
    cin >> contaVerif;
    
    this->mostrarDados(contaVerif);
    
    cout << "\n\nSelecione a operação desejada"<<endl;
    cout << "\nDigite 1 para depositos";
    cout << "\nDigite 2 para saques"<<endl;
    cout << "\nDigite a opção: ";
    cin >> op;
    
    
    
    cout << this->depositoDinheiro(contaVerif, op);
  
}

void cadastroBancario:: mostrarDados(int ContaVerif){
    
    for (int i = 0; i <= 3; i++){
        if (ContaVerif == this->cadastroConta[i].conta){
            cout << "\nNome: " <<this->cadastroConta[i].nome;
        }
    }
    for (int i = 0; i <= 3; i++){
        if(ContaVerif == this->cadastroConta[i].conta){
            cout << "\nCPF: " <<this->cadastroConta[i].cpf;
        }
    }
    for (int i = 0; i <= 3; i++){
        if(ContaVerif == this->cadastroConta[i].conta){
            cout << "\nSaldo: " <<this->cadastroConta[i].deposito;
        }
    }
}


float cadastroBancario:: depositoDinheiro(int ContaVerif, int Op){
    
    float soma, valor;
    
    for (int i = 0; i <= 3; i++){
        if (ContaVerif == this->cadastroConta[i].conta){
            if(Op == 1){
                
                cout << "Entre com o valor do deposito:";
                cin >> valor;
                soma = valor + this->cadastroConta[i].deposito;
                cout << "\nO saldo final é:";
                return soma;
            }
            if(Op == 2){
                
                cout << "Entre com o valor do saque:";
                cin >> valor;
                soma =  this->cadastroConta[i].deposito - valor;
                cout << "\nO saldo final é: ";
                return soma;
            }
        }
    }
}

    
    