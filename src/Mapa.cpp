#include "Mapa.h"
    
    Mapa::Mapa(string titulo, string autor, int ano, string escala) : Biblioteca(titulo, autor, ano){

    }

    Mapa::Mapa(){

    }

    Mapa::~Mapa(){

    }

    string Mapa::getEscala(){
        return escala;
    }

    void Mapa::setEscala(string escala){
        this->escala = escala;
    }

void Mapa::imprimirBiblioteca() {
    Biblioteca::imprimirBiblioteca();

    // Imprimir informações do mapa
    cout << "| Escala: " << getEscala();
    cout << string(25 - getEscala().length(), ' ') << "|" << endl;

    cout << "+---------------------------------------+" << endl;
}
