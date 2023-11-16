#include "Midia.h"

enum{
    VHS = 1,
    CASSETE = 2,
};

class Fita : public Midia{

    private:

        string formato;
    
    public:

        Fita(string titulo, string autor, int ano, string duracao, string idioma, string formato);
        Fita();
        ~Fita();

        string getFormato();

        void setFormato(string formato);

        void imprimirFita();

};