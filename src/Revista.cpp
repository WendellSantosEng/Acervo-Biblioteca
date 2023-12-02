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
    
void Revista::imprimirBiblioteca() {
    Periodico::imprimirBiblioteca();

    // Imprimir informações da revista
    cout << "| Assunto: " << getAssunto();
    cout << string(27 - getAssunto().length(), ' ') << "|" << endl;
    cout << "| Edicao: " << getEdicao();
    cout << string(28 - getEdicao().length(), ' ') << "|" << endl;

    cout << "+---------------------------------------+" << endl;
}
