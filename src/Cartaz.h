#ifndef CARTAZ_H
#define CARTAZ_H

#include "Biblioteca.h"

class Cartaz : public Biblioteca{

    protected:

    string dimensao;

    public:

        Cartaz(string titulo, string autor, int ano, string dimensao);
        Cartaz();
        ~Cartaz();

        string getDimensao();

        void setDimensao(string dimensao);

        virtual void imprimirBiblioteca();
};

#endif