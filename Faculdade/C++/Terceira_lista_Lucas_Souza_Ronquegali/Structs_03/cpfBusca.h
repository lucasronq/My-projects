#ifndef CPFBUSCA_H
#define CPFBUSCA_H

class cpfBusca {
public:

    
    struct pessoas{
        char nome[40];
        int cpf;
        
    }vetCpf[3];
    
    cpfBusca();
    cpfBusca(const cpfBusca& orig);
    virtual ~cpfBusca();
    
    void lerDados();
    void localizaCpfSequencial(int Contador, int cpfAux);
    int localizaCpfBinario(int Contador, int cpfAux);
    void ordernaBolha(int Contador);
    
private:

};

#endif /* CPFBUSCA_H */

