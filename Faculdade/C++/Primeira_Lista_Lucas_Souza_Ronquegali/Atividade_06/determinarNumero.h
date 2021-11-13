

#ifndef DETERMINARNUMERO_H
#define DETERMINARNUMERO_H

class determinarNumero {
public:
    determinarNumero();
    determinarNumero(const determinarNumero& orig);
    virtual ~determinarNumero();
    
    int numero;
    
    void entradaDados();
    void verifPositivoNegativo();
    void verifParImpar();
    
private:

};

#endif /* DETERMINARNUMERO_H */

