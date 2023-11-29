#include "Livro.h"


	Livro::Livro(string titulo, string autor, int ano, string editoraLivro, string isbn, int paginas, string edicao) : Biblioteca(titulo, autor, ano){

	}		
	
	Livro::Livro(){
	}
	Livro::~Livro(){
	}



    string Livro::getEditoraLivro(){
        return editoraLivro;
    }
    string Livro::getIsbn(){
        return isbn;
    }
    int Livro::getPaginas(){
        return paginas;
    }
    string Livro::getEdicao(){
        return edicao;
    }

    void Livro::setEditoraLivro(string editoraLivro){
        this->editoraLivro = editoraLivro;
    }
    void Livro::setIsbn(string isbn){
        this->isbn = isbn;
    }
    void Livro::setPaginas(int paginas){
        this->paginas = paginas;
    }
    void Livro::setEdicao(string edicao){
        this->edicao = edicao;
    }

	void Livro::imprimirBiblioteca(){
		Biblioteca::imprimirBiblioteca();
		
		cout << "Editora: " << getEditoraLivro() << endl;
		cout << "ISBN: " << getIsbn() << endl;
		cout << "Paginas: " << getPaginas() << endl;
		cout << "Edicao: " << getEdicao() << endl;
	}
