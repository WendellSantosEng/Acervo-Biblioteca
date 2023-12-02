#ifndef PERIODICO_H
#define PERIODICO_H

#include "Biblioteca.h"	

class Periodico : public Biblioteca{	

	//ATRIBUTOS DA CLASSE PERIODICO
	protected:
	string editora;
	int issn;
		
	
	public:
	Periodico(string titulo, string autor, int ano, string editora, int issn);
	Periodico();
	~Periodico();
	
	
	string getEditora();
	int getIssn();
	
	void setEditora(string editora);
	void setIssn(int issn);
	
	virtual void imprimirBiblioteca();
};
#endif