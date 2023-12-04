#include "Cartaz.h"

    Cartaz::Cartaz(string titulo, string autor, int ano, string dimensao){
    }

    Cartaz::Cartaz(){
    }

    Cartaz::~Cartaz(){
    }

    string Cartaz::getDimensao(){
        return dimensao;
    }

    void Cartaz::setDimensao(string dimensao){
        this->dimensao = dimensao;
    }

    
void Cartaz::imprimirBiblioteca() {
    Biblioteca::imprimirBiblioteca();

    // Imprimir informações do cartaz
    cout << "| Dimensao: " << getDimensao();
    cout << string(17 - getDimensao().length(), ' ') << "|" << endl;

    cout << "+---------------------------------------+" << endl;
}
