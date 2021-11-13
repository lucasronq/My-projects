#ifndef RETORNEMENOR_H
#define RETORNEMENOR_H

class retorneMenor {
public:
    retorneMenor();
    retorneMenor(const retorneMenor& orig);
    virtual ~retorneMenor();
    
    int n1, n2;
    
    void leituraValor();
    int retMenor();
    
private:

};

#endif /* RETORNEMENOR_H */

