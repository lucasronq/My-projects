#ifndef EQSEGUNDOGRAU_H
#define EQSEGUNDOGRAU_H

class eqSegundoGrau {
public:
    eqSegundoGrau();
    eqSegundoGrau(const eqSegundoGrau& orig);
    virtual ~eqSegundoGrau();
    
    float B, C;
    
    void lerDados();
    float delta(float a);
    
private:

};

#endif /* EQSEGUNDOGRAU_H */

