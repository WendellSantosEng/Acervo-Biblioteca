#ifndef RELATORIO_H
#define RELATORIO_H

#include "Biblioteca.h"

class Relatorio : public Biblioteca{

    private:

        string departamento;

    public:

        Relatorio(string titulo, string autor, int ano, string departamento);
        Relatorio();
        ~Relatorio();

        string getDepartamento();
        
        void setDepartamento(string departamento);

        virtual void imprimirBiblioteca();
};

#endif