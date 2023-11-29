#include "Midia.h"
    
    Midia::Midia(string titulo, string autor, int ano, string duracao, string idioma) : Biblioteca(titulo, autor, ano){
        
    }

    Midia::Midia(){
        
    }

    Midia::~Midia(){
        
    }

    string Midia::getDuracao(){
        return duracao;
    }

    string Midia::getIdioma(){
        return idioma;
    }


    void Midia::setDuracao(string duracao){
        this->duracao = duracao;
    }

    void Midia::setIdioma(string idioma){
        this->idioma = idioma;
    }
    

    void Midia::imprimirBiblioteca(){
        Biblioteca::imprimirBiblioteca();
        
        cout << "Duracao: " << getDuracao() << endl;
        cout << "Idioma: " << getIdioma() << endl;
    }
