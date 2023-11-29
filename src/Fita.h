#ifndef FITA_H
#define FITA_H

#include "Midia.h"

enum{
    VHS = 1,
    CASSETE = 2,
};

class Fita : public Midia{

    protected:

        string formato;
    
    public:

        Fita(string titulo, string autor, int ano, string duracao, string idioma, string formato);
        Fita();
        ~Fita();

        string getFormato();

        void setFormato(string formato);

        virtual void imprimirBiblioteca();

};

#endif