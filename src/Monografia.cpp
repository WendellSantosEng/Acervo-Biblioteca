#include "Monografia.h"

	Monografia::Monografia(string titulo, string autor, int ano, string orientador, string dataDefesa, string tema, string curso, string conclusao) : TrabalhoDeConclusao(titulo, autor, ano, orientador, dataDefesa, tema){
	
	}
	
	Monografia::Monografia()
	{
	}
	
	Monografia::~Monografia()
	{
	}
	
	string Monografia::getCurso(){
		return curso;
	}
	string Monografia::getConclusao(){
		return conclusao;
	}
	
	
	void Monografia::setCurso(string curso){
		this->curso = curso;	
	}
	void Monografia::setConclusao(string conclusao){
		this->conclusao = conclusao;
	}
	
	
void Monografia::imprimirBiblioteca() {
    TrabalhoDeConclusao::imprimirBiblioteca();

    // Imprimir informações da monografia
    cout << "| Curso: " << getCurso();
    cout << string(30 - getCurso().length(), ' ') << "|" << endl;
    cout << "| Conclusão: " << getConclusao();
    cout << string(26 - getConclusao().length(), ' ') << "|" << endl;

	cout << "+---------------------------------------+" << endl;
}