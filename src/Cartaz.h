#ifndef CARTAZ_H
#define CARTAZ_H

#include "Biblioteca.h"

class Cartaz : public Biblioteca{

    private:

    string dimensao;

    public:

        Cartaz(string titulo, string autor, int ano, string dimensao);
        Cartaz();
        ~Cartaz();

        string getDimensao();

        void setDimensao(string dimensao);

        void imprimirCartaz();
};

#endif