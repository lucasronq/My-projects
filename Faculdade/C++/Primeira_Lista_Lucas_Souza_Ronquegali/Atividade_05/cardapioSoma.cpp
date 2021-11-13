#include <iostream>
#include <cstdlib>
#include "cardapioSoma.h"

using namespace std;

cardapioSoma::cardapioSoma() {
}

cardapioSoma::cardapioSoma(const cardapioSoma& orig) {
}

cardapioSoma::~cardapioSoma() {
}

void cardapioSoma:: cardapioTela(){
    
    cout << "***************** CARDÁPIO *****************";
    cout << "\n|=======================================|";
    cout << "\n| ITENS            |  CÓDIGO  |   PREÇO |";
    cout << "\n| Cachorro quente  | 100      |R$ 1,20  |";
    cout << "\n| Bauru simples    | 101      |R$ 1,30  |";
    cout << "\n| Bauru com ovo    | 102      |R$ 1,50  |";
    cout << "\n| Hamburger        | 103      |R$ 1,20  |";
    cout << "\n| Cheeseburguer    | 104      |R$ 1,30  |";
    cout << "\n| Refrigerante     | 105      |R$ 1,00  |";
    cout << "\n|---------------------------------------|";
    cout << "\n|(CÓDIGO)Adicionar | (2)Fechar          |";
    cout << "\n|=======================================|";
}


float cardapioSoma:: somaTotal(){
 
    
    while (sair != 2){
        
        cout << "\nSelecione a opção: ";
        cin >> cod;
        
        switch (cod){
            
            case 2:
                sair = 2;
                break;
            
            case 100:
                valorTotal = valorTotal + 1.20;
                cout << "\nUm cachorre quente foi adicionado a conta.";
                break;
              
            case 101:
                valorTotal = valorTotal + 1.30;
                cout << "\nUm bauru simples foi adicionado a conta.";
                break;
            
            case 102:
                valorTotal = valorTotal + 1.50;
                cout << "\nUm bauru com ovo foi adicionado a conta.";
                break;
            
            case 103:
                valorTotal = valorTotal + 1.20;
                cout << "\nUm hamburger foi adicionado a conta.";
                break;
            
            case 104:
                valorTotal = valorTotal + 1.30;
                cout << "\nUm cheeseburguer foi adicionado a conta.";
                break;
                
            case 105:
                valorTotal = valorTotal + 1.00;
                cout << "\nUm refrigerante foi adicionado a conta.";
                break;
                        
        }
       cout << "\nO valor total a pagar R$" << valorTotal << "!" << endl;       
   } 
}
  

