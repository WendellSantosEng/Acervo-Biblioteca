#ifndef JORNAL_H
#define JORNAL_H

#include "Periodico.h"


class Jornal : public Periodico{

    //ATRIBUTOS DO JORNAL
    protected:
    string cidade;

	public:
		Jornal(string titulo, string autor, int ano, string editora, int issn, string cidade);
		Jornal();
		~Jornal();

    string getCidade();
    
    void setCidade(string cidade);
    
	
	virtual void imprimirBiblioteca();
	
};

#endif