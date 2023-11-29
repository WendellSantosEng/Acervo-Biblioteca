#ifndef MONOGRAFIA_H
#define MONOGRAFIA_H

#include "TrabalhoDeConclusao.h"

class Monografia : public TrabalhoDeConclusao
{
	protected:
		string curso;
		string conclusao;
	
	public:
		Monografia(string titulo, string autor, int ano, string orientador, string dataDefesa, string tema, string curso, string conclusao);
		Monografia();
		~Monografia();
		
		
		string getCurso();
		string getConclusao();
		
		void setCurso(string curso);
		void setConclusao(string conclusao);
		
		virtual void imprimirBiblioteca();
	
};

#endif