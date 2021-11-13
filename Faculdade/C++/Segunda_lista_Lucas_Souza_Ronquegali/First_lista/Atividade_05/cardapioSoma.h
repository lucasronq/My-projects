#ifndef CARDAPIOSOMA_H
#define CARDAPIOSOMA_H

class cardapioSoma {
public:
    cardapioSoma();
    cardapioSoma(const cardapioSoma& orig);
    virtual ~cardapioSoma();
    
    bool compra;
    int cod;
    int sair = 1;
    float valorTotal;
    
    void cardapioTela();
    float somaTotal();
    
private:

};

#endif /* CARDAPIOSOMA_H */

