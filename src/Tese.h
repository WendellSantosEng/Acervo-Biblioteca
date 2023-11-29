#ifndef TESE_H
#define TESE_H

#include "TrabalhoDeConclusao.h"


class Tese : public TrabalhoDeConclusao{

	protected:
        string universidade;
    
    public:   
		Tese(string titulo, string autor, int ano, string orientador, string dataDefesa, string tema, string universidade);
		Tese();
		~Tese();
	
    string getUniversidade();

    void setUniversidade(string universidade);

	virtual void imprimirBiblioteca();
};

#endif