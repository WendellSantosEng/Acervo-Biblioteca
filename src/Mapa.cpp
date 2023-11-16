#ifndef MAPA_H
#define MAPA_H

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

    void Mapa::imprimirMapa(){
        Biblioteca::imprimirBiblioteca();

        cout << "Escala: " << getEscala() << endl;
    }

#endif