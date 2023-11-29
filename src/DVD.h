#ifndef DVD_H
#define DVD_H

#include "Midia.h"

class DVD : public Midia{

    protected:

        string resolucao;

    public:
        
        DVD(string titulo, string autor, int ano, string duracao, string idioma, string resolucao);
        DVD();
        ~DVD();

        string getResolucao();
        void setResolucao(string resolucao);

        virtual void imprimirBiblioteca();

};

#endif