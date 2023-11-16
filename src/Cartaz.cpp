#ifndef CARTAZ_H
#define CARTAZ_H

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

    
    void Cartaz::imprimirCartaz(){
        Biblioteca::imprimirBiblioteca();

        cout << "Dimensao: " << getDimensao() << endl;
    }

#endif
