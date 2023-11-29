#ifndef MAPA_H
#define MAPA_H

#include "Biblioteca.h"

class Mapa : public Biblioteca{

    protected:

        string escala;

    public:

        Mapa(string titulo, string autor, int ano, string escala);
        Mapa();
        ~Mapa();

        string getEscala();

        void setEscala(string escala);


        virtual void imprimirBiblioteca();


};

#endif