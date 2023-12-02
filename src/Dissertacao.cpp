#include "Dissertacao.h"

	Dissertacao::Dissertacao(string titulo, string autor, int ano, string orientador, string dataDefesa, string tema,string departamento, string metodologia) : TrabalhoDeConclusao(titulo, autor, ano, orientador, dataDefesa, tema){
	
	}
	
	
	Dissertacao::Dissertacao()
	{
	}
	
	Dissertacao::~Dissertacao()
	{
	}

    string Dissertacao::getDepartamento(){
        return departamento;
    }
    string Dissertacao::getMetodologia(){
        return metodologia;
    }

    void Dissertacao::setDepartamento(string departamento){
        this->departamento = departamento;
    }
    void Dissertacao::setMetodologia(string metodologia){
        this->metodologia = metodologia;
    }

	void Dissertacao::imprimirBiblioteca() {
		TrabalhoDeConclusao::imprimirBiblioteca();

		// Imprimir informações da dissertação
		cout << "| Departamento: " << getDepartamento();
		cout << string(30 - getDepartamento().length(), ' ') << "|" << endl;
		cout << "| Metodologia: " << getMetodologia();
		cout << string(30 - getMetodologia().length(), ' ') << "|" << endl;

		cout << "+---------------------------------------+" << endl;
	}
