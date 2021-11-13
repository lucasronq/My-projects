
#ifndef DIASEMANOS_H
#define DIASEMANOS_H

class diasEmAnos {
public:
    diasEmAnos();
    diasEmAnos(const diasEmAnos& orig);
    virtual ~diasEmAnos();
    
    int anos, mes, dia, dias;
    
    void leituraDados();
    int calculoTotal();
    
private:

};

#endif /* DIASEMANOS_H */

