#include "DVD.h"

    DVD::DVD(string titulo, string autor, int ano, string duracao, string idioma, string resolucao) : Midia(titulo, autor, ano, duracao, idioma){

    }
    DVD::DVD(){

    }
    DVD::~DVD(){

    }

    string DVD::getResolucao(){
        return resolucao;
    }

    void DVD::setResolucao(string resolucao){
        this->resolucao = resolucao;
    }

void DVD::imprimirBiblioteca() {
    Midia::imprimirBiblioteca();

    // Imprimir informações do DVD
    cout << "| Resolucao: " << getResolucao();
    cout << string(24 - getResolucao().length(), ' ') << "|" << endl;

    cout << "+---------------------------------------+" << endl;
}