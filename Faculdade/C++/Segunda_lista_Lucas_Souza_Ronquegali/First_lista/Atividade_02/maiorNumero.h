#ifndef MAIORNUMERO_H
#define MAIORNUMERO_H

class maiorNumero {
public:
    maiorNumero();
    maiorNumero(const maiorNumero& orig);
    virtual ~maiorNumero();
    
    int n1, n2, n3;
    
    void entradaDados();
    int retorneMaior();
    
private:

};

#endif /* MAIORNUMERO_H */

