#ifndef REVISTA_H
#define REVISTA_H

#include "Periodico.h"



class Revista : public Periodico{
	
	//ATRIBUTOS DA CLASSE REVISTA
    protected:
        string assunto;
        string edicao;
    
    public:
		Revista(string titulo, string autor, int ano, string editora, int issn, string assunto, string edicao);
		Revista();
		~Revista();
	
    string getAssunto();
    string getEdicao();


    void setAssunto(string assunto);
    void setEdicao(string edicao);
    
    virtual void imprimirBiblioteca();

};

#endif