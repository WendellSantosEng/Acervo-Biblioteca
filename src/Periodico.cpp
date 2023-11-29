#include "Periodico.h"

Periodico::Periodico(string titulo, string autor, int ano, string editora, int issn) : Biblioteca(titulo, autor, ano){

}
	Periodico::Periodico(){
		
	}
	
	Periodico::~Periodico()
	{
	}


	string Periodico::getEditora(){
		return editora;
	}
	int Periodico::getIssn(){
		return issn;
	}
	
	void Periodico::setEditora(string editora){
		this->editora = editora;
	}
	void Periodico::setIssn(int issn){
		this->issn = issn;
	}

	void Periodico::imprimirBiblioteca(){
		Biblioteca::imprimirBiblioteca();
		
		cout << "Editora: " << getEditora() << endl;
		cout << "ISSN: " << getIssn() << endl;
	}
	
