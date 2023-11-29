#ifndef DISSERTACAO_H
#define DISSERTACAO_H

#include "TrabalhoDeConclusao.h"

class Dissertacao : public TrabalhoDeConclusao
{
	protected:
    string departamento;
    string metodologia;
    
    
    public:
		Dissertacao(string titulo, string autor, int ano, string orientador, string dataDefesa, string tema, string departamento, string metodologia);
		Dissertacao();
		~Dissertacao();
	

    string getDepartamento();
    string getMetodologia();

    void setDepartamento(string departamento);
    void setMetodologia(string metodologia);
    
    virtual void imprimirBiblioteca();
};

#endif