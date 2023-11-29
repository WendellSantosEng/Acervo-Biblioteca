#ifndef MIDIA_H
#define MIDIA_H

#include "Biblioteca.h"

class Midia : public Biblioteca{

    protected:

        string duracao;
        string idioma;

    public:

        Midia(string titulo, string autor, int ano, string duracao, string idioma);
        Midia();
        virtual ~Midia();

        string getDuracao();
        string getIdioma();

        void setDuracao(string duracao);
        void setIdioma(string idioma);

        virtual void imprimirBiblioteca();
};

#endif