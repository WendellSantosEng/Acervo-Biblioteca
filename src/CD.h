#include "Midia.h"

class CD : public Midia{

    private:

        int num_faixa;


    public:


        CD(string titulo, string autor, int ano, string duracao, string idioma, int num_faixa);
        CD();
        ~CD();

        int getNum_Faixa();

        void setNum_Faixa(int num_faixa);


        void imprimirCD();

};