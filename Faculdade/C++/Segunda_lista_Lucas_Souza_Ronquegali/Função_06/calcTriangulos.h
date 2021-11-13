#ifndef CALCTRIANGULOS_H
#define CALCTRIANGULOS_H

class calcTriangulos {
public:
    calcTriangulos();
    calcTriangulos(const calcTriangulos& orig);
    virtual ~calcTriangulos();
    
    int X, Y, Z;
    
    void lerDados();
    int verifLados();
    
private:

};

#endif /* CALCTRIANGULOS_H */

