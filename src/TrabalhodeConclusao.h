#ifndef TRABALHODECONCLUSAO_H
#define TRABALHODECONCLUSAO_H

#include "Biblioteca.h"

class TrabalhoDeConclusao : public Biblioteca{

    protected:
    string orientador;
    string dataDefesa;
    string tema;

	public:
    	
		//Construtor personalizado
    	TrabalhoDeConclusao(string titulo, string autor, int ano, string orientador, string dataDefesa, string tema);
		// Construtor padr�o
    	TrabalhoDeConclusao();
		//Destrutor
		~TrabalhoDeConclusao();
	

    string getOrientador();
    string getDataDefesa();
    string getTema();

    void setOrientador(string orientador);
    void setDataDefesa(string dataDefesa);
    void setTema(string tema);
    
    virtual void imprimirBiblioteca();
    
};

#endif