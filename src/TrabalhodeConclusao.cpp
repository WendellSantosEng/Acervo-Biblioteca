#include "TrabalhoDeConclusao.h"


TrabalhoDeConclusao::TrabalhoDeConclusao(string titulo, string autor, int ano, string orientador, string dataDefesa, string tema) : Biblioteca(titulo, autor, ano){

}

TrabalhoDeConclusao::TrabalhoDeConclusao()
{
}

TrabalhoDeConclusao::~TrabalhoDeConclusao()
{
}

    string TrabalhoDeConclusao::getOrientador(){
        return orientador;
    }
    string TrabalhoDeConclusao::getDataDefesa(){
        return dataDefesa;
    }
    string TrabalhoDeConclusao::getTema(){
        return tema;
    }

    void TrabalhoDeConclusao::setOrientador(string orientador){
        this->orientador = orientador;
    }
    void TrabalhoDeConclusao::setDataDefesa(string dataDefesa){
        this->dataDefesa = dataDefesa;
    }
    void TrabalhoDeConclusao::setTema(string tema){
        this->tema=tema;
    }

	void TrabalhoDeConclusao::imprimirBiblioteca(){
		Biblioteca::imprimirBiblioteca();
		
		cout << "Orientador: "<< getOrientador() << endl;
		cout << "Data de Defesa: " << getDataDefesa() << endl;
		cout << "Tema: " << getTema() << endl;
	}