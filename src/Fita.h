#ifndef FITA_H
#define FITA_H

#include "Midia.h"

enum{
    VHS = 1,
    CASSETE = 2,
};

class Fita : public Midia{

    protected:

        int formato;
    
    public:

        Fita(string titulo, string autor, int ano, string duracao, string idioma, int formato);
        Fita();
        ~Fita();

        int getFormato();

        void setFormato(int formato);

        virtual void imprimirBiblioteca();

};

#endif