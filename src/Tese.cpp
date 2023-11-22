#include "Tese.h"


	Tese::Tese(string titulo, string autor, int ano, string orientador, string dataDefesa, string tema, string universidade) : TrabalhoDeConclusao(titulo, autor, ano, orientador, dataDefesa, tema){
		
	}
	
	Tese::Tese(){
		
	}
	
	Tese::~Tese()
	{
	}

    string Tese::getUniversidade(){
        return universidade;
    }

    void Tese::setUniversidade(string universidade){
        this->universidade =universidade;
    }

	void Tese::imprimirTese(){
		TrabalhoDeConclusao::imprimirTrabalhoDeConclusao();
		
		cout << "Universidade: " << getUniversidade() << endl;
	}