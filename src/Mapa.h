#ifndef MAPA_H
#define MAPA_H

#include "Biblioteca.h"

class Mapa : public Biblioteca{

    private:

        string escala;

    public:

        Mapa(string titulo, string autor, int ano, string escala);
        Mapa();
        ~Mapa();

        string getEscala();

        void setEscala(string escala);


        void imprimirMapa();


};

#endif