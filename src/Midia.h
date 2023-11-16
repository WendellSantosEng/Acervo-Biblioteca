#include "Biblioteca.h"

class Midia : public Biblioteca{


    private:

        string duracao;
        string idioma;

    public:

        Midia(string titulo, string autor, int ano, string duracao, string idioma);
        Midia();
        ~Midia();

        string getDuracao();
        string getIdioma();

        void setDuracao(string duracao);
        void setIdioma(string idioma);

        virtual void imprimirMidia();


};