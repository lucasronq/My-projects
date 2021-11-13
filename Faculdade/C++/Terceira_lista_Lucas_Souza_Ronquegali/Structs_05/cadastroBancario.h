#ifndef CADASTROBANCARIO_H
#define CADASTROBANCARIO_H

class cadastroBancario {
public:
    
    struct cliente{
        char nome[40];
        int cpf, conta;
        float deposito;
       
    }cadastroConta[3];
    
    cadastroBancario();
    cadastroBancario(const cadastroBancario& orig);
    virtual ~cadastroBancario();
    
    void lerDados();
    void imprimirDados();
    void mostrarDados(int ContaVerif);
    float depositoDinheiro(int Op, int ContaVerif);
    
    
private:

};

#endif /* CADASTROBANCARIO_H */

