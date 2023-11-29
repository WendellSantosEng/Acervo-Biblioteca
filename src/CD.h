#ifndef CD_H
#define CD_H

#include "Midia.h"

class CD : public Midia{

    protected:

        int num_faixa;

    public:


        CD(string titulo, string autor, int ano, string duracao, string idioma, int num_faixa);
        CD();
        ~CD();

        int getNum_Faixa();

        void setNum_Faixa(int num_faixa);

        virtual void imprimirBiblioteca();
};

#endif