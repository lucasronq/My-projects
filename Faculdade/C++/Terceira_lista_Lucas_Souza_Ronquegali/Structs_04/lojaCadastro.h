#ifndef LOJACADASTRO_H
#define LOJACADASTRO_H

class lojaCadastro {
public:
    int codbusca;
    
    struct produtos{
        char nome[20];
        int cod;
        float valor;
        
    }vetProdutos[10];
    
    lojaCadastro();
    lojaCadastro(const lojaCadastro& orig);
    virtual ~lojaCadastro();
    
    void lerDados();
    float buscaValor(int CodBusca, int Contador);
    void mostrarDados(int Contador);
    void verifValor(int codbusca, int contador);
    
private:

};

#endif /* LOJACADASTRO_H */

