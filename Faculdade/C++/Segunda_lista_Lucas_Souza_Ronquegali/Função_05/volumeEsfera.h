#ifndef VOLUMEESFERA_H
#define VOLUMEESFERA_H
#include <math.h>

class volumeEsfera {
public:
    volumeEsfera();
    volumeEsfera(const volumeEsfera& orig);
    virtual ~volumeEsfera();
    
    float diam = 4.0/3.0, pi = 3.14, raio, elev = 3, re, volume;
    
    void lerDados();
    float calculoEsfera();
    
private:

};

#endif /* VOLUMEESFERA_H */

