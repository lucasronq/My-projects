#ifndef ALUNOSMEDIA_H
#define ALUNOSMEDIA_H

class alunosMedia {
public:
    
    struct alunos{
        char nome[40];
        int matricula;
        float nota1, nota2;
    } dadosAlunos[10];
    
    alunosMedia();
    alunosMedia(const alunosMedia& orig);
    virtual ~alunosMedia();
    
    void lerDados();
    void mostrarDados();
    
private:

};

#endif /* ALUNOSMEDIA_H */

