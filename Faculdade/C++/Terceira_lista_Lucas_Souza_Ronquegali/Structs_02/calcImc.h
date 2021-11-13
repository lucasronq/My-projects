#ifndef CALCIMC_H
#define CALCIMC_H

class calcImc {
public:
    
    struct pessoas{
        char nome[40], sexo;
        float altura, peso;
        int cpf;
        
    }vetPessoas[10];
    
    calcImc();
    calcImc(const calcImc& orig);
    virtual ~calcImc();
    
    void lerDados();
    float imcCalc(int cpfBusca, int Contador);
    
private:

};

#endif /* CALCIMC_H */

