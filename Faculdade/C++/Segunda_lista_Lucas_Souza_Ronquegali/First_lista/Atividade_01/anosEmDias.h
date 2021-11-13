#ifndef ANOSEMDIAS_H
#define ANOSEMDIAS_H

class anosEmDias {
public:
    anosEmDias();
    anosEmDias(const anosEmDias& orig);
    virtual ~anosEmDias();
    
    int anos, mes, dias;
    
    void leituraIdade();
    int calculoTotal();
    
private:
      
    

};

#endif /* ANOSEMDIAS_H */

