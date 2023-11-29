#include "Jornal.h"



	Jornal::Jornal(string titulo, string autor, int ano, string editora, int issn, string cidade) : Periodico(titulo, autor, ano, editora, issn){

	}
	
	Jornal::Jornal()
	{
	}
	
	Jornal::~Jornal()
	{
	}

    string Jornal::getCidade(){
        return cidade;
    }
    
    void Jornal::setCidade(string cidade){
        this->cidade = cidade;
    }


	void Jornal::imprimirBiblioteca(){
		Periodico::imprimirBiblioteca();
		
		cout << "Cidade: " << getCidade() << endl;
	}