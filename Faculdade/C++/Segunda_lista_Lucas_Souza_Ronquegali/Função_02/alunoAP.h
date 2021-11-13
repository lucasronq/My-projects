
#ifndef ALUNOAP_H
#define ALUNOAP_H

class alunoAP {
public:
    alunoAP();
    alunoAP(const alunoAP& orig);
    virtual ~alunoAP();
    
    float n1, n2, n3;
    char op;
    
    void lerDados();
    float calcA();
    float calcP();
    
    
private:

};

#endif /* ALUNOAP_H */

