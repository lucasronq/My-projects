

#ifndef CALCEUCLIDIANA_H
#define CALCEUCLIDIANA_H

class calcEuclidiana {
public:
    calcEuclidiana();
    calcEuclidiana(const calcEuclidiana& orig);
    virtual ~calcEuclidiana();
    
    int x1,y1,x2,y2;
    
    void lerDados();
    float calcularDE();
    
private:

};

#endif /* CALCEUCLIDIANA_H */

