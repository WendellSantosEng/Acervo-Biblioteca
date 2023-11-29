#include "Revista.h"


	Revista::Revista(string titulo, string autor, int ano, string editora, int issn, string assunto, string edicao) : Periodico(titulo, autor, ano, editora, issn){

	}
	
	Revista::Revista()
	{
	}
	
	Revista::~Revista()
	{
	}

    string Revista::getAssunto(){
        return assunto;
    }
    string Revista::getEdicao(){
        return edicao;
    }


    void Revista::setAssunto(string assunto){
        this->assunto = assunto;
    }
    void Revista::setEdicao(string edicao){
        this->edicao = edicao;
    }
    
    void Revista::imprimirBiblioteca(){
    	Periodico::imprimirBiblioteca();
    	
    	cout << "Assunto: " << getAssunto() << endl;
    	cout << "Edicao: " << getEdicao() << endl;
	}
