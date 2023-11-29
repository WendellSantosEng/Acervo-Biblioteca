#ifndef LIVRO_H
#define LIVRO_H

#include "Biblioteca.h"	//SEM COMENTAR DA ERRO


	class Livro : public Biblioteca{


    //Atributos da classe Livro
    protected:
	    string editoraLivro;
	    string isbn;
	    int paginas;
	    string edicao;


        public:
		//construtor e destrutor
        Livro(string titulo, string autor, int ano, string editoraLivro, string isbn, int paginas, string edicao);
        Livro();
        ~Livro();
        

        string getEditoraLivro();
        string getIsbn();
        int getPaginas();
        string getEdicao();

        void setEditoraLivro(string editoraLivro);
        void setIsbn(string isbn);
        void setPaginas(int paginas);
        void setEdicao(string edicao);
        
        virtual void imprimirBiblioteca();

};
#endif